#pragma once
#include "Habitacion.h"
class HabitacionMatrimonio :
    public Habitacion
{
public:
    HabitacionMatrimonio() :Habitacion() {};
    HabitacionMatrimonio(int nH, bool d, float p) :Habitacion(nH, d, p) {};
};

