//
// Created by Paco Alvizo on 1/8/18.
//

#ifndef PO_TEMA1_PERSONA_H
#define PO_TEMA1_PERSONA_H

#include <iostream>

class Persona {
    //Atributos
public:
    std::string nombre;
    std::string edad;

    //Métodos
    //Constructor
    Persona();

    //Mostrar información
    std::string muestraPersona();
};


#endif //PO_TEMA1_PERSONA_H
