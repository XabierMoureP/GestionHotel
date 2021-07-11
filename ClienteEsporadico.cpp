#include "ClienteEsporadico.h"
#include "Habitacion.h"
#include "HabitacionSimple.h"
#include "HabitacionDoble.h"
#include "HabitacionMatrimonio.h"
using namespace std;
#include <iostream>

float ClienteEsporadico::calcularPrecio()
{
	char tipoHabitacion;
	char eleccion;
	int numeroNoches;
	long DNI;
	cout << "Introduzca el DNI del cliente:" << endl;
	cin >> DNI;
	cout << "Indique el tipo de habitacion sobre el que desea calcular el precio:\n[S]: Simple\n[D]: Doble\n[M]: Matrimonio" << endl;
	cin >> tipoHabitacion;
	if (tipoHabitacion == 'S')
	{
		HabitacionSimple habitacionAux = new HabitacionSimple();
		cout << "Indique el numero de noches: " << endl;
		cin >> numeroNoches;
		return (numeroNoches * habitacionAux.getPrecio());
	}
}
