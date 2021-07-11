#pragma once
#include "Cliente.h"
class ClienteHabitual
	:public Cliente
{
private:
	float descuento;
	
public:
	ClienteHabitual() :Cliente() { descuento = 6.5; }
	ClienteHabitual(char* n, long dni, float desc) :Cliente(n, dni) { descuento = desc; }

	float getDescuento() { return descuento; }
	void setDescuento(float nuevoDescuento) { descuento = nuevoDescuento; }

	float calcularPrecio();
};

