//
// Created by Paco Alvizo on 1/8/18.
//

#include "Persona.h"

//Definición de métodos
//Constructor
Persona::Persona(){
    this->edad="";
    this->nombre="";
}

Persona::Persona(std::string &nombre, std::string &edad) {
    this->nombre = nombre;
    this->edad = edad;
}

Persona::Persona(std::string &nombre){
    this->nombre=nombre;
    this->edad="";
}

std::string Persona::muestraPersona() {
    return "Nombre: " + this->nombre + " edad: " + this->edad;
}
void Persona::setNombre(std::string nombre){
    this->nombre = nombre;
}

void Persona::setEdad(std::string edad) {
    this->edad = edad;
}

std::string &Persona::getNombre() {
    return this->nombre;
}

std::string &Persona::getEdad() {
    return this->edad;
}

