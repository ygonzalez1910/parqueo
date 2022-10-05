#ifndef COBRO_H
#define COBRO_H
#include<iostream>
using namespace std;
#include "Hora.h"
class Cobro {
public:
	Cobro(Hora*,double);
	~Cobro();
	double totalAPagar();
private:
	Hora* totalHoras;
	double precioHora;
};
#endif

