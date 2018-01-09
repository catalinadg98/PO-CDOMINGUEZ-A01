//
// Created by Catalina Domínguez on 1/8/18.
//

#ifndef PO_CDOMINGUEZ_A01_AUTOMOVIL_H
#define PO_CDOMINGUEZ_A01_AUTOMOVIL_H

#include <iostream>

class Automovil {
    //Atributos
public:
    std::string marca;
    std::string modelo;
    std::string color;
//    float precio;
//    int ocupantes;
//    private int kilometraje;
    std::string precio;
    std::string ocupantes;
    std::string kilometraje;

    //Métodos
    //Constructor
    Automovil();

    //Mostrar información
    std::string avanzar();

};


#endif //PO_CDOMINGUEZ_A01_AUTOMOVIL_H
