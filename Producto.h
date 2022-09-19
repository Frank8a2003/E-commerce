//Hecho por: Francisco Javier Chavez Ochoa
#ifndef PRODUCTOF_H //Guardas
#define PRODUCTOF_H

#include <iostream>
#include <string>
using namespace std;

class Producto{
    public:
        // constructores y destructor
        Producto();
        Producto(string, string, float,int);
        ~Producto();

        // getters
        string getNombre() const;
        string getDescripcion() const;
        float getPrecio() const;
        int getCodigo() const;    

        // setters
        void setNombre(string);
        void setDescripcion(string);
        void setPrecio(float);
        void setCodigo(int);

        // metodo para imprimier los atributos del articulo
        void imprimirProducto();
    private:
        string nombre;
        string descripcion;
        float precio;
        int codigo;
};

#endif 