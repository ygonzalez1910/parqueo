#include "Vehiculo.h"
#include <sstream> 
using std::stringstream;

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

string Vehiculo::toString ( ) {
	stringstream r;
	r << "Marca: " << marca << endl;
	r << "Placa: " << placa << endl;
	r << "Tonelaje: " <<  tonelaje << endl;
	r << "Color: " << color << endl;
	return r.str();
}

string Vehiculo::getMarca ( ) {
	return marca;
}

float Vehiculo::getTonelaje ( ) {
	return tonelaje;
}

string Vehiculo::getColor ( ) {
	return color;
}

