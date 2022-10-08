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

void InfoDelCampo::setEstadoCampo (char estadoCampo) {
	if(estadoCampo == 'M' || 'O' || 'L' || nullptr){
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
	
	if(estadoCampo == 'L' ){
		r << "Estado libre\n";
	}else if(estadoCampo == 'O'){
		r << "Estado ocupado\n";
	}else if(estadoCampo == 'M'){
		r << "Estado en mantenimiento\n";
	}
	
	r << "Lugar: " << numeroCampo << endl;
	
	if(vehiculo != nullptr){
		r << "Placa: " <<  vehiculo -> getPlaca() << endl;
	}else{
		r << "No existe placa en este campo."<<endl;
	}
	
	return r.str();
}
