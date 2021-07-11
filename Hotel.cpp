#include "Hotel.h"
#include "Habitacion.h"
#include "HabitacionSimple.h"
#include "HabitacionDoble.h"
#include "HabitacionMatrimonio.h"
#include "Cliente.h"
#include "ClienteEsporadico.h"
#include "ClienteHabitual.h"
#include <iostream>
#include <conio.h>
#include <string.h>
#pragma warning(disable : 4996)
using namespace std;

Hotel::Hotel()
{
	numeroHabitaciones = 0;
	nombre = nullptr;
	for (int i = 0; i < 60; i++)
	{
		habitacionesHotel[i] = nullptr;
		reservasHotel[i] = nullptr;
	}
	for (int i = 0; i < 10; i++)
	{
		clientesHotel[i] = nullptr;
	}
}

Hotel::Hotel(char* n, int nH)
{
	numeroHabitaciones = nH;
	if (n == nullptr) nombre = n;
	else
	{
		nombre = new char[strlen(n) + 1];
		strcpy(nombre, n);
	}
	for (int i = 0; i < 60; i++)
	{
		habitacionesHotel[i] = nullptr;
		reservasHotel[i] = nullptr;
	}
	for (int i = 0; i < 10; i++)
	{
		clientesHotel[i] = nullptr;
	}
}

Hotel::Hotel(Hotel& hotel)
{
	numeroHabitaciones = hotel.numeroHabitaciones;
	if (hotel.nombre == nullptr) nombre = hotel.nombre;
	else
	{
		nombre = new char[strlen(hotel.nombre) + 1];
		strcpy(nombre, hotel.nombre);
	}
	for (int i = 0; i < 60; i++)
	{
		habitacionesHotel[i] = hotel.habitacionesHotel[i];
		reservasHotel[i] = hotel.reservasHotel[i];
	}
	for (int i = 0; i < 10; i++)
	{
		clientesHotel[i] = hotel.clientesHotel[i];
	}
}

void Hotel::crearHabitaciones()
{
	for (int i = 0; i < 20; i++)
	{
		habitacionesHotel[i] = new HabitacionSimple(i, true, 55.50);
	}
	for (int i = 20; i < 40; i++)
	{
		habitacionesHotel[i] = new HabitacionDoble(i, true, 48.75);
	}
	for (int i = 40; i < 60; i++)
	{
		habitacionesHotel[i] = new HabitacionMatrimonio(i, true, 72.40);
	}
}
void Hotel::obtenerListado()
{
	//Comprobamos la habitaciones disponibles SIMPLES
	cout << "\nHabitaciones simples disponibles:\n" << endl;
	for (int i = 0; i < 20; i++)
	{
		if (habitacionesHotel[i]->getDisponible() == true) cout << "\tNumero habitacion: " << habitacionesHotel[i]->getNumeroHabitacion() << endl;
	}

	//Comprobamos la habitaciones disponibles DOBLES
	cout << "\nHabitaciones dobles disponibles:\n" << endl;
	for (int i = 20; i < 40; i++)
	{
		if (habitacionesHotel[i]->getDisponible() == true) cout << "\tNumero habitacion: " << habitacionesHotel[i]->getNumeroHabitacion() << endl;
	}

	//Comprobamos la habitaciones disponibles DE MARTIMONIO
	cout << "\nHabitaciones de matrimonio disponibles:\n" << endl;
	for (int i = 40; i < 60; i++)
	{
		if (habitacionesHotel[i]->getDisponible() == true) cout << "\tNumero habitacion: " << habitacionesHotel[i]->getNumeroHabitacion() << endl;
	}
}

void Hotel::consultarPrecioHabitacion()
{
	char tipoHabitacion;
	char eleccion;
	float nuevoPrecio;
	do
	{
		cout << "Introduzca el tipo de habitacion del que desea conocer su precio:\n[S]: Simple\n[D]: Doble\n[M]: Matrimonio" << endl;
		cin >> tipoHabitacion;
		switch (tipoHabitacion)
		{
		case 'S':
			cout << "El precio de las habitaciones simples es de " << habitacionesHotel[0]->getPrecio() << " euros." << endl;
			do
			{
				cout << "Indique si desea cambiar el precio de las habitaciones simples:\n[S]: SI\n[N]: NO" << endl;
				cin >> eleccion;
				if (eleccion == 'S')
				{
					cout << "Introduzca el nuevo precio de las habitaicones simples:" << endl;
					cin >> nuevoPrecio;
					for (int i = 0; i < 20; i++)
					{
						habitacionesHotel[i]->setPrecio(nuevoPrecio);
					}
					cout << "Se ha modificado correctamente el precio de las habitaciones simples." << endl;
				}
				else if (eleccion == 'N') cout << "No se modificara el precio de las habitaciones simples." << endl;
				else cout << "Por favor, introduzca una respuesta valida." << endl;
			} while (eleccion != 'S' && eleccion != 'N');
			break;
		
		case 'D':
			cout << "El precio de las habitaciones dobles es de " << habitacionesHotel[20]->getPrecio() << " euros." << endl;
			do
			{
				cout << "Indique si desea cambiar el precio de las habitaciones dobles:\n[S]: SI\n[N]: NO" << endl;
				cin >> eleccion;
				if (eleccion == 'S')
				{
					cout << "Introduzca el nuevo precio de las habitaicones dobles:" << endl;
					cin >> nuevoPrecio;
					for (int i = 20; i < 40; i++)
					{
						habitacionesHotel[i]->setPrecio(nuevoPrecio);
					}
					cout << "Se ha modificado correctamente el precio de las habitaciones dobles." << endl;
				}
				else if (eleccion == 'N') cout << "No se modificara el precio de las habitaciones dobles." << endl;
				else cout << "Por favor, introduzca una respuesta valida." << endl;
			} while (eleccion != 'S' && eleccion != 'N');
			break;
		
		case 'M':
			cout << "El precio de las habitaciones de matrimonio es de " << habitacionesHotel[40]->getPrecio() << " euros." << endl;
			do
			{
				cout << "Indique si desea cambiar el precio de las habitaciones de matrimonio:\n[S]: SI\n[N]: NO" << endl;
				cin >> eleccion;
				if (eleccion == 'S')
				{
					cout << "Introduzca el nuevo precio de las habitaicones de matrimonio:" << endl;
					cin >> nuevoPrecio;
					for (int i = 40; i < 60; i++)
					{
						habitacionesHotel[i]->setPrecio(nuevoPrecio);
					}
					cout << "Se ha modificado correctamente el precio de las habitaciones de matrimonio." << endl;
				}
				else if (eleccion == 'N') cout << "No se modificara el precio de las habitaciones de matrimonio." << endl;
				else cout << "Por favor, introduzca una respuesta valida." << endl;
			} while (eleccion != 'S' && eleccion != 'N');
			break;
		default:
			cout << "Por favor, introduzca una respuesta valida." << endl;
		}
	} while (tipoHabitacion != 'S' && tipoHabitacion != 'D' && tipoHabitacion != 'M');
}

void Hotel::consultarDescuento()
{
	char eleccion;
	float nuevoDescuento;
	clientesHotel[0] = new ClienteHabitual();
	for (int i = 0; i < 10; i++)
	{
		if (dynamic_cast<ClienteHabitual*> (clientesHotel[i]) != nullptr)
		{
			cout << "El descuento ofrecido a clientes habituales es del " << dynamic_cast<ClienteHabitual*>(clientesHotel[i])->getDescuento() << " %." << endl;
			i = 10;
		}
	}
	do
	{
		cout << "Indique si desea modificar el descuento:\n[S]: SI\n[N]: NO" << endl;
		cin >> eleccion;
		if (eleccion == 'S')
		{
			cout << "Introduzca el nuevo descuento a realizar a los clientes habituales:" << endl;
			cin >> nuevoDescuento;
			for (int i = 0; i < 10; i++)
			{
				if (dynamic_cast<ClienteHabitual*> (clientesHotel[i]) != nullptr)
				{
					dynamic_cast<ClienteHabitual*>(clientesHotel[i])->setDescuento(nuevoDescuento);
				}
			}
			cout << "Se ha modificado el descuento correctamente." << endl;
		}
		else if (eleccion == 'N') cout << "No se modificara el descuento a realizar." << endl;
		else cout << "Por favor, introduzca una opcion valida." << endl;
	} while (eleccion != 'S' && eleccion != 'N');
}

void Hotel::reservar()
{
	int numeroHabitacion;
	long DNI;
	char nombreCliente[30];
	int numeroNoches;
	cout << "Introduzca el numero de la habitacion que desea reservar:" << endl;
	cin >> numeroHabitacion;
	cout << "Introduzca el DNI del cliente:" << endl;
	cin >> DNI;
	fflush;
	cout << "Introduzca el nombre del cliente:" << endl;
	cin >> nombreCliente;
	cout << "Introduzca el numero de noches:" << endl;
	cin >> numeroNoches;
	
	reservasHotel[0] = new Reserva(numeroHabitacion, DNI, nombreCliente, numeroNoches);
	habitacionesHotel[numeroHabitacion]->setDisponible();
	cout << "Se ha realizado la reserva correctamente." << endl;
}

void Hotel::eliminarReserva()
{
	int numeroHabitacion;
	int error = 0;
	cout << "Introduzca el numero de la habitacion para eliminar la reserva:" << endl;
	cin >> numeroHabitacion;
	for (int i = 0; i < 60; i++)
	{
		if (reservasHotel[i]->getNumeroHabitacion() == numeroHabitacion)
		{
			reservasHotel[i] = nullptr;
			cout << "Se ha eliminado correctamente la reserva." << endl;
			error = 1;
		}
	}
	if (error == 0) cout << "No se ha encontrado ninguna reserva para esa habitacion." << endl;
}