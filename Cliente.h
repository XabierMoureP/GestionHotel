#pragma once
class Cliente
{
protected:
	char* nombre;
	long DNI;

public:
	Cliente();
	Cliente(char* n, long dni);

	virtual float calcularPrecio() = 0;
};

