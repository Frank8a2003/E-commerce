//Hecho por: Francisco Javier Chavez Ochoa
#ifndef ALMACEN_H
#define ALMACEN_H
#include "Producto.h"

const int tope = 10;

class Almacen{
    public:
        // Constructores y destructor
        Almacen ();
        ~Almacen ();
        // Getters
        Producto getProducto (int);
        int getCantidad (int);
        // Método para agregar un producto al inventario del almacen
        void agregaProductoAlmacen(Producto, int);
        // Método para verificar si hay lo suficiente de algún producto
        bool verificarExistencia (int, int);
        // Método para modificar la cantidad en el almacen en caso que verificarExistencia sea true
        void modificarExistencia(int, int);
        // Método que imprime el almacén
        void imprimeInventario ();

    private:
        Producto inventario [tope];
        int cantidadesEnAlmacen [tope];
        int cantAlm;
};

#endif