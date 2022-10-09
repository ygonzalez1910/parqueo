#ifndef COBRO_H
#define COBRO_H
#include<iostream>
using namespace std;
#include "Hora.h"
class Cobro {
public:
	Cobro(Hora*,Hora*);
	~Cobro();
	int getHoraEntrada();
	int getHoraSalida();
	double getTotalPagar();
	void setTotalPagar(double);
	void setHoraEntrada(Hora*);
	void setHoraSalida(Hora*);
	double total(Hora*, float, Hora*);
	
private:
	Hora* entrada;
	Hora* salida;
	const int precioHora = 800;
	double totalPagar;
	
};
#endif

