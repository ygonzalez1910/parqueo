#ifndef COBRO_H
#define COBRO_H
#include "Hora.h"
#include<iostream>
using namespace std;

class Cobro {
public:
	Cobro(Hora*);
	~Cobro();
	double totalAPagar();
private:
	Hora* horaEntrada;
	Hora* horaSalida;
	double precioHora;

};

#endif

