//Omar Adalid Macías Mayorquín
#include <iostream>
#include "Cliente.h"

Cliente::Cliente(){
    nombre="";
    domicilio="";
    correo="";
    numero=0;
}
Cliente::Cliente(std::string _nombre, std::string _domicilio, std::string _correo, int _numero){
    nombre=_nombre;
    domicilio=_domicilio;
    correo=_correo;
    numero=_numero;
}
Cliente::~Cliente (){
}
std::string Cliente::getNombre() const{
    return nombre;
}
std::string Cliente::getDomicilio() const{
    return domicilio;
}
std::string Cliente::getCorreo() const{
    return correo;
}
int Cliente::getNumero() const{
    return numero;
}
void Cliente::setNombre(std::string _nombre){
    nombre=_nombre;
}
void Cliente::setDomicilio (std::string _domicilio){
    domicilio=_domicilio;
}
void Cliente::setCorreo(std::string _correo){
    correo=_correo;
}
void Cliente::setNumero(int _numero){
    numero=_numero;
}
void Cliente::imprime(){
    std::cout << "------ Datos del cliente --------\n";
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Domicilio: " << domicilio << std::endl;
    std::cout << "Correo: " << correo << std::endl;
    std::cout << "---------------------------------\n";
}