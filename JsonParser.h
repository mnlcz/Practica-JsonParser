//
// Created by MnLCz on 7/2/2021.
//

#pragma once
#include <iostream>
#include <vector>

class Json
{
private:
    std::vector<std::string> datos; // Entiendo a los diferentes elementos (juntos con sus atributos) como una string entera, por lo que datos sera un conjunto de strings.
    unsigned int cantidadElementos;
public:
    explicit Json(const std::vector<std::string>& datos);
    int NumeroAtributos(int elemento) const;
    void MostrarDatos(int elemento) const;
    void MostrarTodo() const; // TODO: funcion para mostrar datos en un vector de multiples elementos.
    unsigned int getCantidadElementos() const { return cantidadElementos; }
};
