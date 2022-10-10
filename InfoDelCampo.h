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
	void setIngresoCobro(double);
	
	double getIngresoCobro();
	int getNumeroCampo();
	char getEstadoCampo();
	void estadoOcupado();
	Vehiculo* getVehiculo();
	
	double cobrarParqueo(string,int);
	
	int contadorUsos = 10;
	
	
private:
	int numeroCampo;
	char estadoCampo;
	Vehiculo* vehiculo;
	double ingresoCobro = 0;
	ConjuntoVehiculos* conjuntoVehiculos;
	
};

#endif

