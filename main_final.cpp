#include <iostream>
#include "Carrito.h"
#include "Almacen.h"
using namespace std;
const int MAXI= 2;

void llenaProductos(Producto prods[], int cantidad){
    string nombre, descripcion;
    float precio;
    int codigo;
    for(int i=0; i < cantidad; i++){
        cout<<"----------------Producto "<<i+1<<"-------------"<<endl;
        cout<<"Nombre: ";
        cin>> nombre;
        cout <<"Descripcion: ";
        cin>>descripcion;
        cout <<"Precio ";
        cin>>precio; 
        cout <<"Codigo ";
        cin>>codigo; 
        prods[i].setNombre(nombre);
        prods[i].setDescripcion(descripcion);
        prods[i].setPrecio(precio);
        prods[i].setCodigo(codigo);
    }
}



int main(){
    int opc=0;
    Producto productos[MAXI];
    llenaProductos(productos,MAXI);
    Almacen mialmacen2;
    mialmacen2.agregaProductoAlmacen(productos[0],5);
    mialmacen2.imprimeInventario();
    Cliente miCliente;
    Carrito micarrito;
    
    for (int i=0;i<MAXI;i++){

        mialmacen2.agregaProductoAlmacen(productos[i], 10);
    }
    cout<<"Bienvenido a la Tienda!!!"<<endl;
    do{
        cout<<"Elige la opcion que quieras realizar"<<endl;
        cout<<"1-Generar cliente"<<endl;
        cout<<"2-Almacen"<<endl;
        cout<<"3-Ver Producto"<<endl;
        cout<<"4-Comprar"<<endl;
        cout<<"5-Salir"<<endl;
        cin>>opc;

        if(opc==1){
            string nombre, domicilio, correo;
            int numero;
            cout<<"Bienvenido!!!, Ingresa los siguientes datos: "<<endl;
            cout<<"Nombre:";
            cin>>nombre;
            cout<<"Domicilio:";
            cin>>domicilio;
            cout<<"Correo electronico:";
            cin>>correo;
            cout<<"Numero:";
            cin>>numero;
            miCliente.setNombre(nombre);
            miCliente.setDomicilio(domicilio);
            miCliente.setCorreo(correo);
            miCliente.setNumero(numero);
        }

        else if(opc==2){
            string pr,d;
            float precio;
            int codigo, cantidad;

            cout<<"Ingresa el nombre del producto que quieres agregar: "<<endl;
            cin>>pr;
            cout<<"Ingresa la descripcion del producto que quieres agregar: "<<endl;
            cin>>d;
            cout<<"Ingresa el precio del producto que quieres agregar"<<endl;
            cin>>precio;
            cout<<"Ingresa el codigo del producto que quieres agregar"<<endl;
            cin>>codigo;
            cout<<"Ingresa la cantidad de productos que quieres agregar"<<endl;
            cin>>cantidad;            
            mialmacen2.agregaProductoAlmacen (Producto (pr, d, precio, codigo), cantidad);
            mialmacen2.imprimeInventario();
        }

        else if(opc==3){
            int consulta;


            cout<<"Ingresa el numero del producto que quieres consultar: "<<endl;
            cin>>consulta;
            if (consulta<=MAXI){
                productos[consulta-1].imprimirProducto();
            }
            else{
                cout<<"No existe ese numero"<<endl;
            }
            

        }

        else if(opc==4){
           
           
           int opcion=0;
           

            do{
                cout<<"Elige una opcion"<<endl;
                cout<<"1-Agregar Producto"<<endl;
                cout<<"2-Revisar Carrito"<<endl;
                cout<<"3-Terminar y pagar"<<endl;
                cin>>opcion;

                if(opcion==1){

                    int codigo;
                    int cantidad;
                    mialmacen2.imprimeInventario();
                    cout<< "Ingrese el codigo del producto que quiere comprar"<<endl;
                    cin>>codigo;
                    cout<<"Ingrese la cantidad de productos que quiere comprar"<<endl;
                    cin>>cantidad;
                    int controlador=mialmacen2.verificarExistencia(codigo,cantidad);

                    int a;

                    if (controlador==1){
                        for(int j=0;j<=10; j++){
                            if (productos[j].getCodigo()==codigo){
                                a=j;

                            }

                        }
                        
                        cout<<"El pedido puede se realizado, hay suficientes unidades para la orden"<<endl;
                        micarrito.agregaProducto(productos[a] , cantidad);
                        mialmacen2.modificarExistencia(codigo,cantidad);
                    }

                    else{
                        cout<<"No hay suficientes en almacen o ingresaste o producto que no existe"<<endl;

                    }
                    
                   
                    
                }
                else if(opcion==2){
                    int posicion;
                    cout<<"Ingrese la posicion del producto que quiere verificar"<<endl;
                    cin>>posicion;
                    micarrito.getProducto(posicion).imprimirProducto();

                }
                else if(opcion==3){
                    micarrito.imprimeTicket();
                    cout<<"Gracias por tu compra "<< miCliente.getNombre()<<"Se enviara al domicilio: "<<miCliente.getDomicilio()<<endl;

                }
                else{
                    cout<<"Opcion no valida"<<endl;
                }

            }while(opcion!=3);

        }
        else{
            cout<<"Gracias por entrar a la tienda, hasta pronto!!"<<endl;
        }

    }while(opc != 5); 

            
    



}



