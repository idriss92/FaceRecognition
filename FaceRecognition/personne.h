#ifndef PERSONNE_H
#define PERSONNE_H
using namespace std;
#include "string"
class Personne
{
private:
    string nom;
    string prenom;
    int code_service;
public:
    Personne();
    Personne(string leNom,string lePrenom, int code_service);
    string getNom();
};

#endif // PERSONNE_H
