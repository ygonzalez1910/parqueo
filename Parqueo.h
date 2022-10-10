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
	
	InfoDelCampo** lugaresParqueo;
	
	int getCantidad();
	int getTamano();
	void setCantidad(int);
	void setTamano(int);
	
	string toString();
	string toStringLibres();
	string toStringOcupados();
	string toStringMantenimiento();
	string vehiculosDeterminadoCampo(int);
	
	void agregarVehiculo(InfoDelCampo*);
	void llenarVacios();
	void asignarContVehi();
	
	int cantidadEspaciosOcupados();
	int cantidadEspaciosMantenimiento();
	int porcOcupParqueo();
	int cantCampLibres();
	int cantVehiculosParqueo();
	
	double cobroTotal(int,double,Hora*);
	double cobroDeterminadoCampo(int);
	
	double seleccionarParqueo(int,string,int);
	ConjuntoVehiculos* conjuntoVehiculos;

private:
	Vehiculo* vehiculo;
	Cobro* cobro;
	int cantidad;
	int tamano;
};

#endif

