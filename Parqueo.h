#ifndef PARQUEO_H
#define PARQUEO_H
#include "InfoDelCampo.h"
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
	void agregarVehiculo(InfoDelCampo* vehiculo);
	void cantidadEspaciosLibres();
	void cantidadEspaciosOcupados();
	void cantidadEspaciosMantenimiento();
	void rangoTonelaje();
	
private:
	InfoDelCampo** lugaresParqueo;
	int cantidad;
	int tamano;
	Vehiculo* vehiculo;
};

#endif

