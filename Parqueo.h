#ifndef PARQUEO_H
#define PARQUEO_H
#include "InfoDelCampo.h"
#include "Cobro.h"
#include "ConjuntoVehiculos.h"
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
	void llenarVacios();
	void asignarContVehi();
	void cobroTotal(int,double,int,int);
	string vehiculosRangoTonelaje(double);
	double cobroDeterminadoCampo(int);
	
	
private:
	InfoDelCampo** lugaresParqueo;
	Vehiculo* vehiculo;
	Cobro* cobro;
	int cantidad;
	int tamano;
};

#endif

