#pragma once
#include "Habitacion.h"
#include "Reserva.h"
#include "Cliente.h"
class Hotel
{
private:
	char* nombre;
	int numeroHabitaciones;
	Habitacion* habitacionesHotel[60];
	Cliente* clientesHotel[10];
	Reserva* reservasHotel[60];

public:
	Hotel();
	Hotel(char* n, int nH);
	Hotel(Hotel& hotel);

	void crearHabitaciones();
	void obtenerListado();
	void consultarPrecioHabitacion();
	void consultarDescuento();
	void reservar();
	void eliminarReserva();
};

