#include "InfoDelCampo.h"
#include <sstream>
using std::stringstream;

<<<<<<< Updated upstream
InfoDelCampo::InfoDelCampo(int numeroCampo,char estadoCampo):numeroCampo(numeroCampo),estadoCampo(estadoCampo) {
=======
InfoDelCampo::InfoDelCampo(Vehiculo* numeroCampo,Vehiculo* estadoCampo):
	numeroCampo(numeroCampo),estadoCampo(estadoCampo) {
>>>>>>> Stashed changes
	
}

InfoDelCampo::~InfoDelCampo() {
	
}


<<<<<<< Updated upstream
string InfoDelCampo::toString(){
<<<<<<< HEAD
=======
string InfoDelCampo::toString (  ) {
>>>>>>> Stashed changes
	stringstream r;
=======
	stringstream r;;;
>>>>>>> parent of 546e591... Revert "Merge remote-tracking branch 'origin/main' into main"

	if(estadoCampo == 'L'){
		r << "Estado libre\n";
	}else if(estadoCampo == 'O'){
		r << "Estado ocupado\n";
	}else if(estadoCampo == 'M'){
		r << "Estado en mantenimiento\n";
	}
	r << "Lugar: " << numeroCampo << endl;
	//r << "Placa: " <<  Vehiculo->getPlaca() << endl;
	
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

