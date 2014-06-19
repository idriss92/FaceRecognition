#include "recognizer.h"

Recognizer::Recognizer()
{
}
Recognizer::Recognizer(Mat img, Mat tmpl, Mat Result)
{
    this->img = img;
    this->templ = tmpl;
    this->result = Result;
}
void Recognizer::Match(){

}
