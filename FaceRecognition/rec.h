#ifndef REC_H
#define REC_H


#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
using namespace cv;
class rec
{
private:
    Mat img;
    Mat templ;
    Mat result;
public:
    rec();
    rec(Mat img, Mat tmpl, Mat result);
    void Match();
};

#endif // REC_H
