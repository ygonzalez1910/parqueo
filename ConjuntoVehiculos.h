#ifndef CONJUNTOVEHICULOS_H
#define CONJUNTOVEHICULOS_H
#include "Vehiculo.h"
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
	
private:
	Vehiculo** vehiculos;
	int tamano;
	int cantidad;
	
};

#endif
