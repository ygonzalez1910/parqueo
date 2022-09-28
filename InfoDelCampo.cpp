#include "InfoDelCampo.h"
#include <sstream>
using std::stringstream;

InfoDelCampo::InfoDelCampo(int numeroCampo,string estadoCampo):numeroCampo(numeroCampo),estadoCampo(estadoCampo) {
	
}

InfoDelCampo::~InfoDelCampo() {
	
}


string InfoDelCampo::toString ( ) {
	stringstream r;
	r << "Lugar: " << numeroCampo << endl;
	r << "Estado: " << estadoCampo << endl;
	r << "Placa: " <<  vehiculo.getPlaca() << endl;
	return r.str();
}

