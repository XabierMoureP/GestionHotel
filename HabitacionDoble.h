#pragma once
#include "Habitacion.h"
class HabitacionDoble :
    public Habitacion
{
public:
    HabitacionDoble() :Habitacion() {};
    HabitacionDoble(int nH, bool d, float p) :Habitacion(nH, d, p) {};
};

