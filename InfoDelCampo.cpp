#include "InfoDelCampo.h"
#include <sstream>
using std::stringstream;

InfoDelCampo::InfoDelCampo(int numeroCampo,char estadoCampo):numeroCampo(numeroCampo),estadoCampo(estadoCampo) {

}

InfoDelCampo::~InfoDelCampo(){
	
}

string InfoDelCampo::toString (  ) {
	stringstream r;


	if(estadoCampo == 'L'){
		r << "Estado libre\n";
	}else if(estadoCampo == 'O'){
		r << "Estado ocupado\n";
	}else if(estadoCampo == 'M'){
		r << "Estado en mantenimiento\n";
	}
	r << "Lugar: " << numeroCampo << endl;
	r << "Placa: " <<  vehiculo->getPlaca() << endl;
	
	return r.str();
}


void InfoDelCampo::setEstadoCampo (char estadoCampo) {
	if(estadoCampo == 'M' || 'O' || 'L'){
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

