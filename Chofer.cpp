#include "Chofer.h"
#include <sstream> 
using std::stringstream;

Chofer::Chofer(string nombre, string cedula):
	nombre(nombre),cedula(cedula){
	
}

Chofer::~Chofer(){
	
}


void Chofer::setNombre(string nombre){
	this->nombre = nombre;
}

void Chofer::setCedula(string cedula){
	this->cedula = cedula;
}

string Chofer::toString(){
	stringstream r;
	
	r << "Nombre chofer: "<< nombre << endl;
	r << "Cedula chofer: "<< cedula << endl;
	
	return r.str();
}
