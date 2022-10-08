#ifndef CONJUNTOVEHICULOS_H
#define CONJUNTOVEHICULOS_H
#include "Vehiculo.h"
#include "Cobro.h"
#include "Chofer.h"
#include <sstream>
#include <string>
using namespace std;

class ConjuntoVehiculos {
public:
	ConjuntoVehiculos(int);
	~ConjuntoVehiculos();
	void agregarVehiculo(Vehiculo*);
	Vehiculo* crearCarrito(string,string,float,string);
	string toString();
	bool estaLleno();
	Vehiculo* seleccionarParqueo(int);
	string toStringMostrarVehiculosQueEstenONo();
	double cantidadDineroIngresadoAlDia();
	void tonelajeVehiculosMayorUso();
	int TotalVehiculosDia();
	
	
private:
	Vehiculo** vehiculos;
	int tamano;
	int cantidad;
	Chofer* chofer;
	Cobro* cobro;
	
};

#endif
