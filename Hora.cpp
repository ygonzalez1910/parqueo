#include "Hora.h"

Hora::Hora(int horaEntrada,int horaSalida): 
	horaEntrada(horaEntrada),horaSalida(horaSalida){
	
}

Hora::~Hora(){
	
}

void Hora::setHoraEntrada(int){
	
	this -> horaEntrada = horaEntrada;
	
}

void Hora::setHoraSalida(int){
	this -> horaSalida = horaSalida;
}

int Hora::getHoraEntrada ( ) {
	return horaEntrada;
}

int Hora::getHoraSalida ( ) {
	return horaSalida;
}

