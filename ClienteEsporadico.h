#pragma once
#include "Cliente.h"
class ClienteEsporadico :
    public Cliente
{
public:
    ClienteEsporadico() :Cliente() {};
    ClienteEsporadico(char* n, long dni) :Cliente(n, dni) {};

    float calcularPrecio();
};

