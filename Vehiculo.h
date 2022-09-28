#ifndef VEHICULO_H
#define VEHICULO_H
#include "Chofer.h"
#include "Cobro.h"
#include<iostream>
using namespace std;

class Vehiculo {
public:
	Vehiculo(string,string,float,string);
	~Vehiculo();
	string setMarca();
	string setPlaca();
	float setTonelaje();
	string setColor();
private:
	string marca;
	string placa;
	float tonelaje;
	string color;
	Chofer* chofer;
	Cobro* cobro;
	
};

#endif

