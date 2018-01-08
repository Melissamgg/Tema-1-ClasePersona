//
// Created by Paco Alvizo on 1/8/18.
//

#include "Persona.h"

//Definición de métodos
//Constructor
Persona::Persona(){
    this->edad="37";
    this->nombre="Francisco";
}

std::string Persona::muestraPersona() {
    return "Nombre: " + this->nombre + " edad: " + this->edad;
}