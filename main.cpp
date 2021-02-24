#include "JsonParser.h"

void prueba1();
void prueba2();

int main()
{
    prueba1();
    prueba2();

    return 0;
}

void prueba1()
{
    std::cout << "TEST 1" << std::endl;
    // Probando con un vector que tenga una string sola.
    std::vector<std::string> datos;
    std::string elemento1 = "{ Nombre: Fabian, Email: fabian@gmail.com, DNI: 123456789 }";
    datos.push_back(elemento1);
    Json jsonPrueba(datos);
    // Mostrando atributos:
    std::cout << "Cantidad de atributos: " << jsonPrueba.NumeroAtributos(1) << std::endl;
    jsonPrueba.MostrarDatos(1);
    std::cout << std::endl<<std::endl;
}

void prueba2()
{
    std::cout << "TEST 2" << std::endl;
    std::string elemento1 = "{ Nombre: Fabian, Email: fabian@gmail.com, DNI: 123456789 }";
    std::string elemento2 = "{ Nombre: Superman, Fecha: 1978, Director: Richard Donner }";
    std::string elemento3 = "{ Zipic: 1 3 2 -1, Size: 3 }";
    std::vector<std::string> datos = { elemento1, elemento2, elemento3 };
    Json jsonPrueba(datos);
    std::cout << "Cantidad de elementos: " << jsonPrueba.getCantidadElementos() << std::endl;
    // Mostrando datos:
    std::cout << "Mostrando elementos: " << std::endl;
    jsonPrueba.MostrarTodo();
}