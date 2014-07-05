#include "rec.h"
#include <iostream>
#include <dirent.h>
#include<sys/types.h>

using namespace std;

rec::rec()
{
    this->path =   "/home/joaany/Pictures/";
    this->model =  createFisherFaceRecognizer();
}


int rec::Match(String picture){
    int r = 999;
    Mat image;
    image = imread( picture , 1 );

    Mat grayImage;

    cvtColor(image, grayImage, CV_RGB2GRAY);

    r = model->predict(grayImage);
    return r;
}

void rec::getPersonnes(){

     DIR* rep = NULL;
     rep = opendir(this->path.c_str());
     struct dirent* ent = NULL;
     int lab = 0;


     while ((ent = readdir(rep)) != NULL){
          if (ent->d_name[0] != '.'){

              string fname = ent->d_name;

              this->chemins.push_back(fname);

              listImg.push_back(imread(path.c_str() + fname, CV_LOAD_IMAGE_GRAYSCALE));
              labels.push_back(lab);
              cout<<path.c_str() + fname<<endl;
              lab++;
          }
     }

       cout<<listImg.size()<<endl;

       model =  createFisherFaceRecognizer();
       model->train(listImg, labels);
}

void rec::prepareCheck(){

    try{
          model->train(listImg, labels);
    }catch(Exception e){
        cout<<"Erreur Train fichier incompatible"<<endl;
    }
}


Mat rec::getListImg(int indice){
     return this->listImg.at(indice);
 }
 String  rec::getChemins(int indice){
     return this->chemins.at(indice);
 }
