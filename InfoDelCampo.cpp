#include "InfoDelCampo.h"
#include <sstream>
using std::stringstream;

InfoDelCampo::InfoDelCampo(int numeroCampo,char estadoCampo)
	:numeroCampo(numeroCampo),estadoCampo(estadoCampo),vehiculo(nullptr) {

}

InfoDelCampo::~InfoDelCampo(){
	
}

void InfoDelCampo::estadoOcupado(){
	estadoCampo = 'O';
}

void InfoDelCampo::estadoLibre(){
	estadoCampo = 'L';
}

void InfoDelCampo::setEstadoCampo (char estadoCampo) {
	if(estadoCampo == 'M' || 'O' || 'L' ){
		this -> estadoCampo = estadoCampo;
	}
}

void InfoDelCampo::setNumeroCampo (int numeroCampo) {
	this -> numeroCampo = numeroCampo;
}

int InfoDelCampo::getNumeroCampo ( ) {
	return numeroCampo;
}

char InfoDelCampo::getEstadoCampo ( ) {
	return estadoCampo;
}

void InfoDelCampo::setVehiculos(ConjuntoVehiculos* conjuntoVehiculos){
	this -> conjuntoVehiculos = conjuntoVehiculos;
}

string InfoDelCampo::toString (  ) {
	stringstream r;
	r << " " << numeroCampo ;
	if(estadoCampo == 'L' ){
		r << "-Libre -> ";
	}else if(estadoCampo == 'O'){
		r << "-Ocupado -> ";
		//r << vehiculo -> getPlaca();
	}else if(estadoCampo == 'M'){
		r << "-Mantenimiento -> ";
	}
	
	if(vehiculo != nullptr){
		r << " Placa: " <<  vehiculo -> getPlaca() << endl;
	}else{
		r << "No existe placa en este campo\n"<<endl;
	}
	
	return r.str();
}

Vehiculo * InfoDelCampo::getVehiculo ( ) {
	return vehiculo;
}

void InfoDelCampo::setVehiculo (Vehiculo * vehiculo ) {
	this -> vehiculo = vehiculo;
}


double InfoDelCampo::cancelarParqueo2(int campo,int salida,string placa){
	return vehiculo->total(salida, placa);
}
