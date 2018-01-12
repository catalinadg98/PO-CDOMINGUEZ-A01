#include <iostream>
#include "Automovil.h"

int main() {
    Automovil coche = *new Automovil("Dodgde", "Avenger", "Blanco", 300000.00, 5);

    coche.avanzar(1000);
    std::cout<<coche.kilometraje;

    return 0;
}