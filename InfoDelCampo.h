#ifndef INFODELCAMPO_H
#define INFODELCAMPO_H
#include "Vehiculo.h"
#include "ConjuntoVehiculos.h"
#include<iostream>
using namespace std;

class InfoDelCampo {
public:
	
	InfoDelCampo(int,char);
	~InfoDelCampo();
	string toString();
	void setEstadoCampo(char);
	void setNumeroCampo(int);
	void setVehiculo( Vehiculo*);
	void setVehiculos(ConjuntoVehiculos*);
	int getNumeroCampo();
	char getEstadoCampo();
	void estadoOcupado();
	Vehiculo* getVehiculo();
	void estadoLibre();
	double cobrarParqueo(Hora*,string, Hora*);
	
private:
	int numeroCampo;
	char estadoCampo;
	Vehiculo* vehiculo;
	ConjuntoVehiculos* conjuntoVehiculos;
	
};

#endif

