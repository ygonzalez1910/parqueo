#include "Cobro.h"
#include <sstream>
using std::stringstream;

Cobro::Cobro(Hora* entrada):entrada(entrada),salida(salida),precioHora(800),totalPagar(0){
	
}

Cobro::~Cobro() {
	
}


double Cobro::getTotalPagar ( ) {
	return totalPagar;
}


int Cobro::getHoraEntrada(){
	return entrada -> getHora();
}


void Cobro::setHoraEntrada(Hora* entrada){
	this -> entrada = entrada;
}


void Cobro::setTotalPagar (double totalPagar) {
	this -> totalPagar = totalPagar;
}

string Cobro::toString ( ) {
	stringstream r;
	
	r << "Hora entrada: " << entrada -> getHora() << endl;
	r << "Hora salida: " << salida -> getHora() << endl;
	r << "Total a pagar: " <<  totalPagar << endl;
	
	return r.str();
}


double Cobro::total(int hsalida, float tonelaje){
	
	
	Hora* hora = new Hora(hsalida);
	setHoraSalida(hora);
	
	int totalHoras = 0;
	double cobroAdicional = 0;
	
	
	

	totalHoras = salida->getHora() - entrada->getHora();
	
	cout<<"Iniciando calculo de cobro. Tonelaje: "<< tonelaje<<" HE: "<<entrada->getHora()<<", HS: "<<salida->getHora() <<endl; 
	
	if( tonelaje <= 1.0){
		cobroAdicional = 0.0;
	}else if( tonelaje > 1.0 && tonelaje <= 1.5){
		cobroAdicional = 0.05;
	}else if( tonelaje > 1.6 && tonelaje <= 3.5){
		cobroAdicional = 0.10;
	}else if( tonelaje > 3.5 && tonelaje <= 5.0){
		cobroAdicional = 0.15;
	}else{
		cobroAdicional = 0.20;
	}
	totalPagar = (totalHoras * precioHora) + ( cobroAdicional * (totalHoras * precioHora));
	
	return totalPagar;
}



int Cobro::getHoraSalida ( ) {
	return salida -> getHora();
}

void Cobro::setHoraSalida (Hora * salida) {
	this -> salida = salida;
}

