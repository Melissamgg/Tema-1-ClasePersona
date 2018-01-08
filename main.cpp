#include <iostream>
#include "Persona.h"

int main() {
    Persona maestro = *new Persona();
    std::cout << maestro.muestraPersona();

    return 0;
}