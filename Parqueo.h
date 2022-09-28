#ifndef PARQUEO_H
#define PARQUEO_H
#include "InfoDelCampo.h"
#include<iostream>
using namespace std;


class Parqueo {
public:
	Parqueo();
	~Parqueo();
	int getCantidad();
	int getTamano();
	void setCantidad(int);
	void setTamano(int);
private:
	int lugarParqueo;
	int cantidad;
	int tamano;
	InfoDelCampo* infoDelCampo;
};

#endif

