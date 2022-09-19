//Omar Adalid Macías Mayorquín
#ifndef CLIENTE_H //Guardas
#define CLIENTE_H

#include <string>

class Cliente{
    public:
        // Constructores y destructor
        Cliente();
        Cliente(std::string, std::string, std::string, int);
        ~Cliente();
        // Getters
        std::string getNombre() const;
        std::string getDomicilio () const;
        std::string getCorreo () const;
        int getNumero () const;
        // Setters
        void setNombre (std::string);
        void setDomicilio (std::string);
        void setCorreo (std::string);
        void setNumero (int);
        // Método para imprimier los atributos de la clase
        void imprime ();
    private:
        std::string nombre;
        std::string domicilio;
        std::string correo;
        int numero;
};

#endif //Guardas