#ifndef COBRO_H
#define COBRO_H
#include<iostream>
using namespace std;
#include "Hora.h"
class Cobro {
public:
	Cobro();
	~Cobro();
	double totalCobro();
	float getTotalPagar();
	Hora* getHoras();
	double total(int, float,string);
	
private:
	Hora* hora;
	const int precioHora = 800;
	float totalPagar;
	
};
#endif

