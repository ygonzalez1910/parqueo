#ifndef COBRO_H
#define COBRO_H
#include<iostream>
using namespace std;

#include "Hora.h"
class Cobro {
public:
	Cobro();
	~Cobro();
	double totalAPagar(double,int,int);
	
private:
	const int precioHora = 800;
	
};
#endif

