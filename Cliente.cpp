#include "Cliente.h"
#include <iostream>
#pragma warning(disable : 4996)

Cliente::Cliente()
{
	DNI = 0;
	nombre = nullptr;
}

Cliente::Cliente(char* n, long dni)
{
	DNI = dni;
	if (n == nullptr) nombre = n;
	else
	{
		nombre = new char[strlen(n) + 1];
		strcpy(nombre, n);
	}
}
