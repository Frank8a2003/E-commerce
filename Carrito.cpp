//Omar Adalid Macías Mayorquín
#include "Carrito.h"

Carrito::Carrito(){
    cantProd=0;
}

Carrito::~Carrito(){
}

Producto Carrito::getProducto(int pos){
    if(pos>=0 && pos<cantProd){
        return productos[pos];
    }
    Producto p;
    return p;
}

int Carrito::getCantidad(int pos){
    if(pos>=0 && pos<cantProd){
        return cantidades[pos];
    }
    return 0;
}

void Carrito::agregaProducto(Producto p, int cuantos){
    if (cantProd < MAX){
        productos[cantProd]=p;
        cantidades[cantProd]=cuantos;
        cantProd++;
    }
}

float Carrito::calculaTotal(){
    float total=0;
    for(int i=0; i<cantProd; i++){
        total += productos[i].getPrecio() * cantidades[i];
    }
    return total;
}

void Carrito::imprimeTicket(){
    cout<< "----------- TICKET -----------"<<endl;
    for(int i=0; i<cantProd;i++){
        productos[i].imprimirProducto();
        cout << cantidades[i] << " | $"<< productos[i].getPrecio()*cantidades[i] << " | "<<endl;
    }
    cout<<"Total : $"<< calculaTotal() <<endl;
    cout<<"-------------------------------"<<endl;
}