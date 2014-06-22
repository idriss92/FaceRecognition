#include "service.h"

Service::Service()
{
}
Service::Service(int code_service, string libelle){
    this->code_service = code_service;
    this->libelle = libelle;
}
