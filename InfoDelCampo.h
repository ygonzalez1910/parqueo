#ifndef INFODELCAMPO_H
#define INFODELCAMPO_H
#include "ConjuntoVehiculos.h"
#include "Vehiculo.h"
#include<iostream>
using namespace std;

class InfoDelCampo {
public:
<<<<<<< Updated upstream
	InfoDelCampo(int,char);
=======
	InfoDelCampo(Vehiculo*,Vehiculo*);
>>>>>>> Stashed changes
	~InfoDelCampo();
	string toString();
	void setEstadoCampo(char);
	void setNumeroCampo(int);
	int getNumeroCampo();
	char getEstadoCampo();
	
private:
<<<<<<< Updated upstream
	int numeroCampo;
	char estadoCampo;
=======
	Vehiculo* numeroCampo;
	Vehiculo* estadoCampo;
>>>>>>> Stashed changes
	ConjuntoVehiculos* conjuntoVehiculos;
	
};

#endif

