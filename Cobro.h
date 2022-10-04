

#ifndef COBRO_H
#define COBRO_H
#include "Hora.h"
#include<iostream>
using namespace std;

class Cobro {
public:
	Cobro(Hora*,double);
	~Cobro();
	double totalAPagar(float);
private:
	Hora* hora;
	double precioHora;
};
#endif

