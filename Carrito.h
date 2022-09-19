//Omar Adalid Macías Mayorquín
#ifndef CARRITO_H //Guardas
#define CARRITO_H

#include "Producto.h"
#include "Cliente.h"

const int MAX=10;

class Carrito{
    public:
        // Constructores y destructor
        Carrito();
        ~Carrito();
        // Getters
        Producto getProducto(int);
        int getCantidad(int);
        // Método para agregar o eliminar un producto del carrito
        void agregaProducto(Producto, int);
        void eliminarProducto(Producto, int);
        // Método para calcular la compra total
        float calculaTotal();
        // Método para imprimir el ticket de compra
        void imprimeTicket();

    private:
        Producto productos[MAX];
        int cantidades[MAX];
        int cantProd;
        Cliente cliente;
};

#endif //CARRITO_H