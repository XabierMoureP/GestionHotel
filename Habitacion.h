#pragma once
class Habitacion
{
protected:
	int numeroHabitacion;
	bool disponible;
	float precio;

public:
	Habitacion() { numeroHabitacion = 0, disponible = true, precio = 0.0; }
	Habitacion(int nH, bool d, float p) { numeroHabitacion = nH, disponible = d, precio = p; }

	bool getDisponible() { return disponible; }
	void setDisponible() { disponible = false; }
	int getNumeroHabitacion() { return numeroHabitacion; }

	float getPrecio() { return precio; }
	void setPrecio(float precioNuevo) { precio = precioNuevo; }
};

