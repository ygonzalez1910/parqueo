#include "Hora.h"

Hora::Hora(string horaEntrada,string horaSalida): 
	horaEntrada(horaEntrada),horaSalida(horaSalida){
	
}

Hora::~Hora() {
	
}

void Hora::setHoraEntrada (string) {
	this->horaEntrada = horaEntrada;
}

void Hora::setHoraSalida (string) {
	this->horaSalida = horaSalida;
}

