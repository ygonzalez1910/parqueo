#include "Cobro.h"

Cobro::Cobro(){
	
}

Cobro::~Cobro() {
	
}

double Cobro::totalAPagar (double tonelaje, int entrada, int salida) {
	
	int totalHoras = 0;
	double totalCobro = 0;
	double cobroAdicional = 0;
	
	totalHoras = salida - entrada;
	
	if( tonelaje < 1.0){
		cobroAdicional = 0.0;
	}else if( tonelaje <= 1.0 && tonelaje <= 1.5){
		cobroAdicional = 0.05;
	}else if( tonelaje <= 1.6 && tonelaje <= 3.5){
		cobroAdicional = 0.10;
	}else if( tonelaje <= 3.6 && tonelaje <= 5.0){
		cobroAdicional = 0.15;
	}else{
		cobroAdicional = 0.20;
	}
	
	return (totalHoras * precioHora) * cobroAdicional;
}
