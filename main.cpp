#include <iostream>

using namespace std;


    class Animal//Se crea una clase nueva
    {
    public:
    string nombre;//Se define una variable string para el nombre
    int edad;//Se define una variable int para la edad

    Animal()//Se hace una funcion vacia de la clase
    {
    }

    int getEdad()//Funcion para obtener la edad
    {

        return edad;//Devuelve la edad 
    }

    void setEdad(int edad)//Funcion para asignar la edad
    {
        this-> edad = edad;//La edad definida en la funcion es igual a la de la variable hecha 
    }

    string getNombre()//Funcion para obtener el nombre
    {
        return nombre;//Devuelve el nombre
    }

    void setNombre(string nombre)//Funcion para asignar el nombre
    {
        this-> nombre = nombre;//El nombre definido en la funcion es igual a la de la variable hecha 
    }


    };

    class Perro : public Animal//Se hace una clase perro que herede de la clse animal
    {
        Perro(int edad, string nombre)//Se manda a llamar las funciones anteriores
        {
            setEdad(edad);//Se llama la funcion edad
            setNombre(nombre);//Se llama la funcion nombre
        }

        string ladrar()//Se hace una funcion del perro para que ladre
        {
            return "guau";//Devuelve la string "guau" 
        }



    };

    class Gato : public Animal//Se hace una clase gato que herede de la clse animal
    {
        public:

        Gato(int edad, string nombre)//Se manda a llamar las funciones anteriores
        {
            setEdad(edad);//Se llama la funcion edad
            setNombre(nombre);//Se llama la funcion nombre
        }

        string maullar()//Se hace una funcion del gato para que maulle 
        {
            return "miau";//Devuelve la string "miau" 
        }
    };

int main()
{

    return 0;
}
