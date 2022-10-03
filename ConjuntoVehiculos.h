#ifndef CONJUNTOVEHICULOS_H
#define CONJUNTOVEHICULOS_H
#include "Vehiculo.h"
#include <iostream>
using namespace std;

class ConjuntoVehiculos {
public:
	ConjuntoVehiculos(int,int);
	~ConjuntoVehiculos();
	void agregarVehiculo(Vehiculo*);
	bool estaLleno();
	string toString();
	Vehiculo* seleccionarParqueo( int );
private:
	Vehiculo** vehiculos;
	int cantidad;
	int tamano;
	
};

#endif

