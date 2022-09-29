#include "Vehiculo.h"

Vehiculo::Vehiculo(string marca,string placa,float tonelaje,string color): 
	marca(marca),placa(placa),tonelaje(tonelaje),color(color) {
	
}

Vehiculo::~Vehiculo(){
	
}


void Vehiculo::setMarca(string marca){
	this->marca = marca;
}

void Vehiculo::setPlaca(string placa){
	this->placa = placa;
}

void Vehiculo::setTonelaje(float tonelaje){
	this->tonelaje = tonelaje;
}

void Vehiculo::setColor(string color){
	this->color=color;
}

string Vehiculo::getPlaca ( ) {
	return placa;
}

