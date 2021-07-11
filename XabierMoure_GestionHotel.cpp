#include <iostream>
#include "Hotel.h"
using namespace std;

int main()
{
    int eleccion;
    //Creamos nuestro hotel y sus habitaciones
    Hotel miHotel(_strdup("Hotelito"), 60);
    miHotel.crearHabitaciones();
    cout << "Bienvenido al menu de Hotelito. Indique la operacion que desea realizar:" << endl;
    do
    {
        cout << "[1]: Obtener listado de las habitaciones disponibles.\n[2]: Consultar y/o modifcar el precio de un tipo de habitacion." << endl;
        cout << "[3]: Consultar y/o modifcar el precio realizado a los clientes habituales.\n[4]: Consultar precio total para un cliente." << endl;
        cout << "[5]: Reservar una habitacion.\n[6]: Eliminar una reserva.\n[7]: Calcular las ganancias del mes.\n[8]: Salir." << endl;
        cin >> eleccion;
        switch (eleccion)
        {
            case 1:
                miHotel.obtenerListado();
                break;
            case 2:
                miHotel.consultarPrecioHabitacion();
                break;
            case 3:
                miHotel.consultarDescuento();
                break;
            case 4:
                break;
            case 5:
                miHotel.reservar();
                break;
            case 6:
                miHotel.eliminarReserva();
                break;
            case 7:
                break;
            case 8:
                cout << "\n\n\nEl programa va a cerrarse.\n\n\n\n";
                return 0;
            default:
                cout << "Respuesta no valida. Por favor elija una de las opciones." << endl;
                break;
        }
    } while (eleccion < 1 || eleccion>7 || eleccion != 8);
}
