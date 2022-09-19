//Hecho por: Francisco Javier Chavez Ochoa
#include <iostream>
#include "Almacen.h"
#include "Producto.h"

Almacen::Almacen(){
    cantAlm=0;
}


Almacen::~Almacen(){
}
Producto Almacen::getProducto(int posicion){
    if (posicion>=0 && posicion<cantAlm){
        return inventario[posicion];
    }
    Producto inv;
    return inv;
}
int Almacen::getCantidad(int posicion){
    if (posicion>=0 && posicion<cantAlm){
        return cantidadesEnAlmacen[posicion];
    }
    return 0;
}
void Almacen::agregaProductoAlmacen(Producto product, int cuanto){
    if (cantAlm < tope){
        inventario[cantAlm]=product;
        cantidadesEnAlmacen[cantAlm]=cuanto;
        cantAlm++;
    }
}
bool Almacen::verificarExistencia (int codigo, int cantidadComprobar){
    for(int i=0; i<=tope; i++){
        if(inventario[i].getCodigo()==codigo){
            if (cantidadComprobar<=cantidadesEnAlmacen[i]){
                return true;
            }
        }
    }
    return false;
}
void Almacen::modificarExistencia(int codigo, int cuanto){
        for(int i=0; i<=tope; i++){
        if(inventario[i].getCodigo()==codigo){
            if(cuanto<=cantidadesEnAlmacen[i]){
                cantidadesEnAlmacen[i]=cantidadesEnAlmacen[i]-cuanto;
            }

        }
    }
}

void Almacen::imprimeInventario(){
    cout << "-------- Inventario en Almacen --------\n";
    for (int i=0;i<cantAlm;i++){
        inventario[i].imprimirProducto();
        cout <<"Cantidad en Stock: "<< cantidadesEnAlmacen[i] << endl;
        cout << "----------------------------------\n";
    }
}

