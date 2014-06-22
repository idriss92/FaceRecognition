#ifndef SERVICE_H
#define SERVICE_H
#include "personne.h"
#include "string"
#include  "vector"
class Service
{
private:
    int code_service;
    string libelle;
    vector<Personne> lesPersonnes;
public:
    Service();
    Service(int code_service, string libelle);
};

#endif // SERVICE_H
