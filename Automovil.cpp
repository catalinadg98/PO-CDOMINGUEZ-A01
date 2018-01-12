//
// Created by Catalina Domínguez on 1/11/18.
//

#include "Automovil.h"

Automovil::Automovil() {
    this->marca="";
    this->modelo="";
    this->color="";
    this->precio=0.0;
    this->ocupantes=0;
    this->kilometraje=0;
}

Automovil::Automovil(std::string marca, std::string modelo, std::string color, int ocupantes, float precio) {
    this->marca=marca;
    this->modelo=modelo;
    this->color=color;
    this->ocupantes=ocupantes;
    this->precio=precio;
    this->kilometraje=0;
}

void Automovil::avanzar(int kilometros) {
    this->kilometraje=this->kilometraje+kilometros;
}