#ifndef RECOGNIZER_H
#define RECOGNIZER_H
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;
using namespace cv;
class Recognizer
{
private:
    Mat img;
    Mat templ;
    Mat result;
public:
    Recognizer();
    Recognizer(Mat img, Mat tmpl, Mat result);
    void Match();
};
#endif // RECOGNIZER_H
