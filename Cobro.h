#ifndef COBRO_H
#define COBRO_H
#include "Hora.h"
#include<iostream>
using namespace std;

class Cobro {
public:
	Cobro();
	~Cobro();
	double totalAPagar();
private:
	Hora* hora;
	const double PrecioHora = 800.00;

};

#endif

