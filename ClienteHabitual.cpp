#include "ClienteHabitual.h"
#include "Habitacion.h"
#include "HabitacionSimple.h"
#include "HabitacionDoble.h"
#include "HabitacionMatrimonio.h"
using namespace std;
#include <iostream>
float ClienteHabitual::calcularPrecio()
{
	long DNI;
	char tipoHabitacion;
	int numeroNoches;
	cout << "Introduzca el DNI del cliente:" << endl;
	cin >> DNI;
	cout << "Introduzca el numero de noches:" << endl;
	cin >> numeroNoches;
	cout << "Introduzca el tipo de habitacion sobre el que desea calcular el precio:\n[S]: Simple\n[D]: Doble\n[M]: Matrimonio" << endl;
	cin >> tipoHabitacion;
	if (tipoHabitacion == 'S')
	{
		HabitacionSimple habitacionAux = new HabitacionSimple();
		return (numeroNoches*habitacionAux.getPrecio()*(100-))
	}

}