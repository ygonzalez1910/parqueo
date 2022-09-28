#include "Parqueo.h"
#include <sstream> 
using std::stringstream;

Parqueo::Parqueo(int cantidad,int tamano):cantidad(cantidad),tamano(tamano),lugaresParqueo(new InfoDelCampo*[tamano]) {
	for(int i=0; i < tamano; i++){ //llena el vector de campos vacios 
		lugaresParqueo[i] = nullptr;
	}
}

Parqueo::~Parqueo() {
	delete [] lugaresParqueo;
}


int Parqueo::getCantidad ( ) {
	return cantidad;
}

int Parqueo::getTamano ( ) {
	return tamano;
}

void Parqueo::setCantidad (int cantidad) {
	this -> cantidad = cantidad;
}

void Parqueo::setTamano (int tamano) {
	this -> tamano = tamano;
}

string Parqueo::toString ( ) {
	stringstream r;
	for(int i=0; i < cantidad; i++){
		if(lugaresParqueo[i] != nullptr){
			r << i <<"."<< lugaresParqueo[i]->toString();	
		}
	}
	return r.str();
}

