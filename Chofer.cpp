#include "Chofer.h"

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

