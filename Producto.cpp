//Hecho por: Francisco Javier Chavez Ochoa
#include "Producto.h"

Producto::Producto(){
    nombre = "";
    precio = 0.0;
    descripcion = "";
    codigo = 0;
}

Producto::Producto(string _nombre, string _descripcion, float _precio, int _codigo){
    nombre = _nombre;
    descripcion=_descripcion;
    precio = _precio;
    codigo = _codigo;
}

Producto::~Producto(){

}

string Producto::getNombre() const{
  return nombre;
}

string Producto::getDescripcion() const{
  return descripcion;
}

float Producto::getPrecio() const{
  return precio;
}

int Producto::getCodigo() const{
  return codigo;
}

void Producto::setNombre(string _nombre){
  nombre = _nombre;
}

void Producto::setDescripcion(string _descripcion){
  descripcion = _descripcion;
}

void Producto::setPrecio(float _precio){
  precio = _precio;
}

void Producto::setCodigo(int _codigo){
  codigo = _codigo;
}

void Producto::imprimirProducto(){
    cout  <<"Codigo del producto: "<< codigo<<endl;
    cout <<"Nombre: " << nombre <<endl;
    cout << "Precio: $" << precio  <<endl;
    cout << "Descripcion : "<<descripcion <<endl;   
}