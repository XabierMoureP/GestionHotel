#pragma once
#include "Habitacion.h"
class HabitacionSimple :
    public Habitacion
{
public: 
    HabitacionSimple() :Habitacion() {};
    HabitacionSimple(int nH, bool d, float p) :Habitacion(nH, d, p) {};
};

