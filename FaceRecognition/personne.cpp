#include "personne.h"

Personne::Personne()
{
}
Personne::Personne(string leNom, string lePrenom, int code_service){
    this->nom = leNom;
    this->prenom = lePrenom;
    this->code_service = code_service;
}


string Personne::getNom(){
    return this->nom;
}
