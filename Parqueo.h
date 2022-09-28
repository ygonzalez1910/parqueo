#ifndef PARQUEO_H
#define PARQUEO_H
#include "InfoDelCampo.h"
#include<iostream>
using namespace std;


class Parqueo {
public:
	Parqueo(int,int);
	~Parqueo();
	int getCantidad();
	int getTamano();
	void setCantidad(int);
	void setTamano(int);
	string toString();
private:
	InfoDelCampo** lugaresParqueo;
	int cantidad;
	int tamano;
};

#endif

