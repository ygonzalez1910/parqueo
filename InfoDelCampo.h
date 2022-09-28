#ifndef INFODELCAMPO_H
#define INFODELCAMPO_H
#include "ConjuntoVehiculos.h"
#include "Vehiculo.h"
#include<iostream>
using namespace std;

class InfoDelCampo {
public:
	InfoDelCampo(int,string);
	~InfoDelCampo();
	string toString();
	
private:
	int numeroCampo;
	string estadoCampo;
	ConjuntoVehiculos* conjuntoVehiculos;
	
};

#endif

