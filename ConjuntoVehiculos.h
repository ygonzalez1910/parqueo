#ifndef CONJUNTOVEHICULOS_H
#define CONJUNTOVEHICULOS_H
#include "Vehiculo.h"
#include "Cobro.h"
#include <sstream>
#include <string>
using namespace std;

class ConjuntoVehiculos {
public:
	ConjuntoVehiculos(int);
	~ConjuntoVehiculos();
	void agregarVehiculo(Vehiculo*);
	void crearCarrito(string,string,float,string);
	string toString();
	bool estaLleno();
	Vehiculo* seleccionarParqueo(int);
	string toStringMostrarVehiculosQueEstenONo();
	double cantidadDineroIngresadoAlDia(Cobro*);
private:
	Vehiculo** vehiculos;
	int tamano;
	int cantidad;
	Cobro* cobroTotal;
	
};

#endif
