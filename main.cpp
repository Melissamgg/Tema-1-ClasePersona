#include <iostream>
#include "Persona.h"

int main() {
    std::string n,e;

    //Persona maestro = *new Persona();
    std::cout<<"Escribe el nombre"<<"\n";
    std::cin>>n;
    std::cout<<"Escribe la edad"<<"\n";
    std::cin>>e;


    Persona alumna = *new Persona(n, e);  //Instanciamos un objeto de la clase Persona



    std::cout<< alumna.getNombre()<<"\n";
    std::cout<< alumna.getEdad()<<"\n";

    alumna.setNombre("Ana Luz");
    alumna.setEdad("18");

    std::cout<< alumna.getNombre()<<"\n";
    std::cout<< alumna.getEdad()<<"\n";
   // std::cout << alumna.muestraPersona();


    return 0;
}