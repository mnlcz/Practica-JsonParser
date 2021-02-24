//
// Created by MnLCz on 7/2/2021.
//

#include "JsonParser.h"
#include <string>

Json::Json(const std::vector<std::string>& datos)
{
    this->datos = datos;
    this->cantidadElementos = datos.size();
}

int Json::NumeroAtributos(int elemento) const
{
    std::string sAUX= this->datos[elemento - 1]; // Pruebo primero con la primera string.
    int contador = 0;
    for(int i = 0; i < sAUX.length(); i++)
        if(sAUX[i] == ':')
            contador++;

    return contador;
}

void Json::MostrarDatos(int elemento) const
{
    std::string sAUX = this->datos[elemento - 1];
    for(int i = 1; i < sAUX.length() - 1; i++) // 1 y -1 para ignorar las llaves al inicio y final del texto.
    {
        if(sAUX[i] == ',') std::cout<<std::endl;
        else
        {
            std::cout<<sAUX[i];
        }
    }
}

void Json::MostrarTodo() const
{
    int sizeDatos = this->datos.size();
    for(int i = 0; i < sizeDatos; i++)
    {
        this->MostrarDatos(i + 1);
        std::cout<<std::endl<<std::endl;
    }
}

