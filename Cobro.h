#ifndef COBRO_H
#define COBRO_H
#include<iostream>
using namespace std;
#include "Hora.h"
#include "Vehiculo.h"
class Cobro {
public:
	Cobro(Hora*,double);
	~Cobro();
	double totalAPagar(Vehiculo*);
private:
	Hora* totalHoras;
	double precioHora;
};
#endif

