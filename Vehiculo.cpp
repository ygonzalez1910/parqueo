#include "Vehiculo.h"

Vehiculo::Vehiculo(string marca,string placa,float tonelaje,string color): 
	marca(marca),placa(placa),tonelaje(tonelaje),color(color) {
	
}

Vehiculo::~Vehiculo() {
	
}


string Vehiculo::setMarca ( ) {
	marca = marca;
}

string Vehiculo::setPlaca ( ) {
placa = placa;
}

float Vehiculo::setTonelaje ( ) {
	tonelaje = tonelaje;
}

string Vehiculo::setColor ( ) {
	color = color;
}

