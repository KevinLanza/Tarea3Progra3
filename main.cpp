#include <iostream>

using namespace std;


    class Animal
    {
    public:
    string nombre;
    int edad;

    Animal()
    {
    }

    int getEdad()
    {

        return edad;
    }

    void setEdad(int edad)
    {
        this-> edad = edad;
    }

    string getNombre()
    {
        return nombre;
    }

    void setNombre(string nombre)
    {
        this-> nombre = nombre;
    }


    };

    class Perro : public Animal
    {
        Perro(int edad, string nombre)
        {
            setEdad(edad);
            setNombre(nombre);
        }

        string ladrar()
        {
            return "guau";
        }



    };

    class Gato : public Animal
    {
        public:

        Gato(int edad, string nombre)
        {
            setEdad(edad);
            setNombre(nombre);
        }

        string maullar()
        {
            return "miau";
        }
    };

int main()
{

    return 0;
}
