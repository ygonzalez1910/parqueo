#ifndef CONJUNTOVEHICULOS_H
#define CONJUNTOVEHICULOS_H
#include "Vehiculo.h"
#include "Cobro.h"
#include "Chofer.h"
#include "Hora.h"
#include <sstream>
#include <string>
using namespace std;

class ConjuntoVehiculos {
public:
	ConjuntoVehiculos(int);
	~ConjuntoVehiculos();
	void agregarVehiculo(Vehiculo*);
	Vehiculo* crearCarrito(string,string,float,string,int);
	string toString();
	bool estaLleno();
	Vehiculo* seleccionarParqueo(int);
	string toStringMostrarVehiculosQueEstenONo();
	double cantidadDineroIngresadoAlDia();
	string tonelajeVehiculosMayorUso();
	int TotalVehiculosDia();
	string vehiculosRangoTonelaje();
	
	double total(string,int);
	Vehiculo** vehiculos;
	
private:
	
	int tamano;
	int cantidad;
	Chofer* chofer;
	Cobro* cobro;
	Hora* hora;
	
};

#endif
