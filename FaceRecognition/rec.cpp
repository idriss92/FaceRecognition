#include "rec.h"
#include <iostream>
using namespace std;
rec::rec()
{
}
rec::rec(Mat img, Mat tmpl, Mat Result)
{
    this->img = img;
    this->templ = tmpl;
    this->result = Result;
}
void rec::Match()
{
    /// Source image to display
  cout<<1;
     Mat img_display;
     img.copyTo( img_display );
        int match_method;
  cout<<2;
     int result_cols =  img.cols - templ.cols + 1;
     int result_rows = img.rows - templ.rows + 1;
  cout<<3;
     result.create( result_cols, result_rows, CV_32FC1 );
 cout<<4;
     /// Do the Matching and Normalize
     matchTemplate( img, templ, result, 0 );
  cout<<5;
     normalize( result, result, 0, 1, NORM_MINMAX, -1, Mat() );

     /// Localizing the best match with minMaxLoc
     double minVal; double maxVal; Point minLoc; Point maxLoc;
     Point matchLoc;

     minMaxLoc( result, &minVal, &maxVal, &minLoc, &maxLoc, Mat() );

     /// For SQDIFF and SQDIFF_NORMED, the best matches are lower values. For all the other methods, the higher the better
     if( match_method  == CV_TM_SQDIFF || match_method == CV_TM_SQDIFF_NORMED )
       { matchLoc = minLoc; }
     else
       { matchLoc = maxLoc; }

     /// Show me what you got
     rectangle( img_display, matchLoc, Point( matchLoc.x + templ.cols , matchLoc.y + templ.rows ), Scalar::all(0), 2, 8, 0 );
     rectangle( result, matchLoc, Point( matchLoc.x + templ.cols , matchLoc.y + templ.rows ), Scalar::all(0), 2, 8, 0 );

     imshow( "image_window", img_display );
     imshow( "result_window", result );

}
