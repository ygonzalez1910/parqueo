#include "Vehiculo.h"

Vehiculo::Vehiculo(string marca,string placa,float tonelaje,string color): 
	marca(marca),placa(placa),tonelaje(tonelaje),color(color) {
	
}

Vehiculo::~Vehiculo() {
	
}


void Vehiculo::setMarca (string marca) {
	this->marca = marca;
}

<<<<<<< Updated upstream
void Vehiculo::setPlaca (string placa) {
	this->placa = placa;
=======
string Vehiculo::setPlaca ( ) {
	placa = placa;
>>>>>>> Stashed changes
}

void Vehiculo::setTonelaje (float tonelaje) {
	this->tonelaje = tonelaje;
}

void Vehiculo::setColor (int color) {
	this->color=color;
}

