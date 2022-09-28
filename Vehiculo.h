#ifndef VEHICULO_H
#define VEHICULO_H
#include "Chofer.h"
#include "Cobro.h"
#include<iostream>
using namespace std;

class Vehiculo {
public:
	Vehiculo();
	~Vehiculo();
private:
	string Marca;
	int Placa;
	float Tonelaje;
	string Color;
	Chofer* Chofer;
	Cobro* Cobro;
	
};

#endif

