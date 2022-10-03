#ifndef COBRO_H
#define COBRO_H
#include "Hora.h"
#include "Vehiculo.h"
#include<iostream>
using namespace std;

class Cobro {
public:
	Cobro(Hora*);
	~Cobro();
	double totalAPagar( Vehiculo*);
private:
	Hora* totalHoras;
	double precioHora;

};

#endif

