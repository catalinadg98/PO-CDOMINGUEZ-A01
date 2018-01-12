//
// Created by Catalina Domínguez on 1/11/18.
//

#ifndef PO_CDOMINGUEZ_A02_AUTOMOVIL_H
#define PO_CDOMINGUEZ_A02_AUTOMOVIL_H

#import <iostream>

class Automovil {
private:
    //Atributos
    std::string marca, modelo, color;
    float precio;
    int ocupantes;

public:
    //Constructor
    //Default
    Automovil();
    //Valores Iniciales
    Automovil(std::string marca, std::string modelo, std::string color, int ocupantes, float precio);
    //Métodos
    void avanzar(int kilometros);

    //Getters y Setters
    void setMarca(std::string marca);
    void setModelo(std::string modelo);
    void setColor(std::string color);
    void setKilometraje(int kilometraje);
    std::string &getMarca ();
    std::string &getModelo ();
    std::string &getColor ();
    int &getKilometraje();

    int kilometraje;
};


#endif //PO_CDOMINGUEZ_A02_AUTOMOVIL_H
