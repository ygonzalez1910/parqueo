#ifndef PARQUEO_H
#define PARQUEO_H
#include "InfoDelCampo.h"
#include "Cobro.h"
#include<iostream>
using namespace std;
class Parqueo {
public:
	Parqueo(int);
	~Parqueo();
	int getCantidad();
	int getTamano();
	void setCantidad(int);
	void setTamano(int);
	string toString();
	string toStringLibres();
	string toStringOcupados();
	string toStringMantenimiento();
	void agregarVehiculo(InfoDelCampo*);
	int cantidadEspaciosOcupados();
	int cantidadEspaciosMantenimiento();
	int porcOcupParqueo();
	int cantCampLibres();
	int cantVehiculosParqueo();
	string vehiculosDeterminadoCampo(int);
	double cobroPapi(int,double,int,int);
	
private:
	InfoDelCampo** lugaresParqueo;
	Vehiculo* vehiculo;
	Cobro* cobro;
	int cantidad;
	int tamano;
};

#endif

