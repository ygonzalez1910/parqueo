#ifndef COBRO_H
#define COBRO_H
#include<iostream>
using namespace std;
#include "Hora.h"
class Cobro {
public:
	Cobro(Hora*);
	~Cobro();
	double totalAPagar( double );
private:
	Hora* totalHoras;
	const int precioHora = 800;
};
#endif

