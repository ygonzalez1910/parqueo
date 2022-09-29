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
	string getPlaca();
	void setMarca(string);
	void setPlaca(string);
	void setTonelaje(float);
	void setColor(string);
	string getMarca();
	float getTonelaje();
	string getColor();
	
private:
	string marca;
	string placa;
	float tonelaje;
	string color;
	Chofer* chofer;
	Cobro* cobro;
	
};

#endif

