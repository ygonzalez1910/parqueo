#ifndef COBRO_H
#define COBRO_H
#include<iostream>
using namespace std;

#include "Hora.h"
class Cobro {
public:
	Cobro();
	~Cobro();
	void totalAPagar(double,int,int);
	float getTotalPagar();
	
private:
	const int precioHora = 800;
	float totalPagar;
	
};
#endif

