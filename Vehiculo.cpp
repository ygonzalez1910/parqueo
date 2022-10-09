#include "Vehiculo.h"
#include <sstream> 
using std::stringstream;

Vehiculo::Vehiculo(string marca,string placa,float tonelaje,string color, Hora* entrada): 
	marca(marca),placa(placa),tonelaje(tonelaje),color(color),entrada(nullptr){
	
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

void Vehiculo::setHora(Hora* entrada){
	this -> entrada = entrada;
}

void Vehiculo::setCobro(Cobro* cobro){
	this -> cobro = cobro;
}

string Vehiculo::getPlaca ( ) {
	return placa;
}

int Vehiculo::getHoraEntrada(){
	return entrada->getHora();
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


string Vehiculo::toString ( ) {
	stringstream r;
	
	r << "Marca: " << marca << endl;
	r << "Placa: " << placa << endl;
	r << "Tonelaje: " <<  tonelaje << endl;
	r << "Color: " << color << endl;
	r << "Hora entrada: " << entrada<<endl;
	
	return r.str();
}


//double Vehiculo::total(int salida,int entrada){
//	return cobro -> total(salida,tonelaje,entrada);
//}
