#include "capture.h"

#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/imgproc/imgproc_c.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <QKeyEvent>
Capture::Capture()
{
    this->filename = "/home/joaany/Documents/ProjetC++/testOpenCv/haarcascade_frontalface_alt.xml";
    this->cascade = ( CvHaarClassifierCascade* )cvLoad( this->filename, 0, 0, 0 );
    this->nom = "unknwon";
}
 Capture::Capture(const char* nom)
{
    this->filename = "/home/joaany/Documents/ProjetC++/testOpenCv/haarcascade_frontalface_alt.xml";
    this->nom = nom;
    this->cascade = ( CvHaarClassifierCascade* )cvLoad( this->filename, 0, 0, 0 );
}
void Capture::init(){


   storage = cvCreateMemStorage( 0 );
   capture = cvCreateCameraCapture(CV_CAP_ANY);
   cvNamedWindow( "Window-FT", CV_WINDOW_AUTOSIZE );



    while( this->key != 'q' )
    {
      img= cvQueryFrame( capture );
     //  cvShowImage( "test Window", img);
        detectFaces( img );
          key = cvWaitKey( 10 );

     }

    cvReleaseCapture( &capture );
    cvDestroyWindow( "Window-FT" );
    cvReleaseHaarClassifierCascade( &cascade );
    cvReleaseMemStorage( &storage );
}
void Capture::detectFaces( IplImage *img )
{
      int i;
      int x0;
      int y0;
      int h0;
      int l0;

      CvSeq *faces = cvHaarDetectObjects(
               img,
               cascade, storage, 1.1, 3,    0 ,
               cvSize( 40, 40 ) );

       for( i = 0 ; i < ( faces ? faces->total : 0 ) ; i++ ) {
            CvRect *r = ( CvRect* )cvGetSeqElem( faces, i );
            if(i==0) {
             x0=r->x;
             y0=r->y;

            }
            cvRectangle( img, cvPoint( r->x, r->y ),  cvPoint( r->x + r->width, r->y + r->height ),
                         CV_RGB( 255, 0, 0 ), 1, 8, 0 );
         h0= r->height;
         l0= r->width;
        }

        cvSetImageROI(img, cvRect(x0, y0, l0, h0));
     //   cout << "coord : "<< x0 << "," << y0 << endl;


         IplImage *img2 = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);

         cvCopy(img, img2, NULL);
         cvResetImageROI(img);

         CvSize size = cvSize(163,163);
         IplImage* tmpsize=cvCreateImage(size,img->depth,img->nChannels);
         cvResize(img2,tmpsize,CV_INTER_LINEAR);

         saveImage(tmpsize);
         cvShowImage( "Window-FT", img );
}

void Capture::saveImage(IplImage * frame){


     IplImage* subImg =0;


     subImg = cvCreateImage(cvGetSize(frame), frame->depth, frame->nChannels);
     cvCopy(frame, subImg, NULL);

     IplImage *dst = cvCreateImage(cvSize(400, 400),subImg->depth,3);
     IplImage *dstGray = cvCreateImage(cvSize(400, 400),dst->depth,1);

     cvResize(subImg,dst, CV_INTER_LINEAR );

     cvCvtColor(dst, dstGray, CV_RGB2GRAY);

     cvSaveImage("/home/joaany/Pictures/azerty.jpg", dstGray);

}
