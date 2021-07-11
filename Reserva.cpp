#include "Reserva.h"
#include <iostream>
#pragma warning(disable : 4996)

Reserva::Reserva()
{
	numeroHabitacion = 0;
	DNICliente = 0;
	numeroNoches = 0;
	nombreCliente = nullptr;
}

Reserva::Reserva(int nH, long dni, char* n, int nN)
{
	numeroHabitacion = nH;
	DNICliente = dni;
	numeroNoches = nH;
	if (n == nullptr) nombreCliente = n;
	else
	{
		nombreCliente = new char[strlen(n) + 1];
		strcpy(nombreCliente, n);
	}
}
Reserva::Reserva(Reserva& reserva)
{
	numeroHabitacion = reserva.numeroHabitacion;
	DNICliente = reserva.DNICliente;
	numeroNoches = reserva.numeroNoches;
	if (reserva.nombreCliente == nullptr) nombreCliente = reserva.nombreCliente;
	else
	{
		nombreCliente = new char[strlen(reserva.nombreCliente) + 1];
		strcpy(nombreCliente, reserva.nombreCliente);
	}
}
