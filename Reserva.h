#pragma once
#include "Cliente.h"
#include "Habitacion.h"
class Reserva
{
private:
	int numeroHabitacion;
	long DNICliente;
	char* nombreCliente;
	int numeroNoches;
	Cliente* arrayClientes[10];
	Habitacion* arrayHabitaciones[60];

public:
	Reserva();
	Reserva(int nH, long dni, char* n, int nN);
	Reserva(Reserva& reserva);

	int getNumeroHabitacion() { return numeroHabitacion; }
};

