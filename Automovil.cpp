//
// Created by Catalina Domínguez on 1/8/18.
//

#include "Automovil.h"

//Definición de métodos
//Constructor

Automovil::Automovil() {
    this->marca="Dodge";
    this->modelo="2018";
    this->color="Blanco";
    this->precio="275000";
    this->ocupantes="5";
    this->kilometraje="20000";
}

std::string Automovil::avanzar(){
    return "Marca: " +this->marca + ", Modelo: " +this->modelo + ", Color: " + this->color + ", Precio: $" + this ->precio + ", Ocupantes: " +this->ocupantes + ", Kilometraje: " + this->kilometraje + "km";

}