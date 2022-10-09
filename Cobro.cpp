#include "Cobro.h"

Cobro::Cobro(Hora* entrada,Hora* salida):entrada(entrada),salida(salida),precioHora(800),totalPagar(0){
	
}

Cobro::~Cobro() {
	
}



double Cobro::getTotalPagar ( ) {
	return totalPagar;
}

int Cobro::getHoraSalida(){
	return salida -> getHora();
}

int Cobro::getHoraEntrada(){
	return entrada -> getHora();
}

void Cobro::setHoraEntrada(Hora* entrada){
	this -> entrada = entrada;
}

void Cobro::setHoraSalida(Hora* salida){
	this -> salida = salida;
}

//double Cobro::total(int salida, float tonelaje, int entrada){
//	
//	int totalHoras = 0;
//	double cobroAdicional = 0;
//
//	totalHoras = salida - entrada;
//	
//	if( tonelaje <= 1.0){
//		cobroAdicional = 0.0;
//	}else if( tonelaje > 1.0 && tonelaje <= 1.5){
//		cobroAdicional = 0.05;
//	}else if( tonelaje > 1.6 && tonelaje <= 3.5){
//		cobroAdicional = 0.10;
//	}else if( tonelaje > 3.5 && tonelaje <= 5.0){
//		cobroAdicional = 0.15;
//	}else{
//		cobroAdicional = 0.20;
//	}
//	totalPagar = (totalHoras * precioHora) * cobroAdicional;
//	return totalPagar;
//}


void Cobro::setTotalPagar (double totalPagar) {
	this -> totalPagar = totalPagar;
}

