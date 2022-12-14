#ifndef VEHICULO_H
#define VEHICULO_H
#include "Chofer.h"
#include "Cobro.h"
#include "Hora.h"
#include<iostream>
using namespace std;

class Vehiculo {
public:
	Vehiculo(string,string,float,string,Cobro*);
	~Vehiculo();
	
	void setMarca(string);
	void setPlaca(string);
	void setTonelaje(float);
	void setColor(string);
	void setHora(Hora*);
	void setCobro(Cobro*);
	
	string getMarca();
	float getTonelaje();
	string getColor();
	string getPlaca();
	string toString();
	int getHoraEntrada();
	Hora* getHora();
	Cobro* getCobro();
	
	double total(int);
	
private:
	string marca;
	string placa;
	float tonelaje;
	string color;
	Chofer* chofer;
	Cobro* cobro;
	Hora* entrada;
	
};

#endif

