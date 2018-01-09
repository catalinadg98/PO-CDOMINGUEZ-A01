#include <iostream>
#include "Automovil.h"

int main() {
    Automovil carro1 = *new Automovil();
    std::cout << carro1.avanzar();

    return 0;
}