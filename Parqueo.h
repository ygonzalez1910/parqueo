#ifndef PARQUEO_H
#define PARQUEO_H
#include "InfoDelCampo.h"
#include<iostream>
using namespace std;


class Parqueo {
public:
	Parqueo(int, InfoDelCampo*);
	~Parqueo();
private:
	int lugarParqueo;
	
};

#endif

