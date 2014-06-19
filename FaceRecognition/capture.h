#ifndef CAPTURE_H
#define CAPTURE_H

#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include <iostream>
#include <stdio.h>
using namespace std;
using namespace cv;

class Capture
{

private:
    CvHaarClassifierCascade *cascade;
    CvMemStorage			*storage;
    int key;  char *filename;
    const char*  nom ;
    CvCapture *capture;
    IplImage  *img;

public:
    Capture();
    Capture( const char*   nom);
    void detectFaces( IplImage *img );
    void init();
    void saveImage(IplImage * image);
};

#endif // CAPTURE_H
