#ifndef INFODELCAMPO_H
#define INFODELCAMPO_H

#include "Vehiculo.h"
#include<iostream>
using namespace std;

class InfoDelCampo {
public:
	
	InfoDelCampo(int,char);
	~InfoDelCampo();
	string toString();;;
	void setEstadoCampo(char);
	void setNumeroCampo(int);
	int getNumeroCampo();
	char getEstadoCampo();
	
private:
	int numeroCampo;
	char estadoCampo;
	Vehiculo* vehiculo;
	
};

#endif

