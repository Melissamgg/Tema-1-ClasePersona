//
// Created by Paco Alvizo on 1/8/18.
//

#ifndef PO_TEMA1_PERSONA_H
#define PO_TEMA1_PERSONA_H

#include <iostream>

class Persona {
    //Atributos
private:
    std::string nombre;
    std::string edad;

public:
    //Métodos
    //Constructor
    Persona();
    Persona(std::string &nombre, std::string &edad);
    Persona(std::string &nombre);

    //Mostrar información
    std::string muestraPersona();

    //Getters & Setters
    void setNombre(std::string nombre);
    void setEdad(std::string edad);
    std::string &getNombre ();
    std::string &getEdad();



};


#endif //PO_TEMA1_PERSONA_H
