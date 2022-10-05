#include "Parqueo.h"
#include <sstream> 
using std::stringstream;

Parqueo::Parqueo(int tamano)
	:cantidad(0),tamano(tamano),lugaresParqueo(new InfoDelCampo*[tamano]){
	
	for(int i=0; i < tamano; i++){ //llena el vector de campos vacios 
		lugaresParqueo[i] = nullptr;;;
	}
	
}

Parqueo::~Parqueo() {
	delete [] lugaresParqueo;
}


int Parqueo::getCantidad ( ) {
	return cantidad;
}

int Parqueo::getTamano ( ) {
	return tamano;
}

void Parqueo::setCantidad (int cantidad) {
	this -> cantidad = cantidad;
}

void Parqueo::setTamano (int tamano) {
	this -> tamano = tamano;
}

string Parqueo::toString(){
	stringstream r;
	cout<<"Campos del parqueo: "<<endl;
	for(int i = 0; i < cantidad; i++){
	r << i+1 <<".\n"<< lugaresParqueo[i]-> toString();	
	}
	return r.str();
}

void Parqueo::agregarVehiculo(InfoDelCampo* vehiculo){
	lugaresParqueo[cantidad++] = vehiculo;
}



string Parqueo::toStringLibres ( ) {
	stringstream r;
	r << "Campos libres: \n";
	for(int i=0; i < cantidad; i++){
		if(lugaresParqueo[i] ->getEstadoCampo() == 'L'){
			r << "Numero campo: " <<lugaresParqueo[i] -> getNumeroCampo() << ".\n";
			r << "Estado campo: " << "Libre.\n";	
		}
	}
	return r.str();
}

string Parqueo::toStringOcupados ( ) {
	
	stringstream r;
	for(int i=0; i < cantidad; i++){
		if(lugaresParqueo[i] -> getEstadoCampo() == 'O'){
			r << i+1 <<".\n"<< lugaresParqueo[i]->toString();	
		}
	}
	return r.str();
}

string Parqueo::toStringMantenimiento ( ) {
	stringstream r;
	
	r << "Campos en mantenimiento: \n";
	for(int i=0; i < cantidad; i++){
		if(lugaresParqueo[i] -> getEstadoCampo() == 'M'){
			r << "Numero campo: " <<lugaresParqueo[i] -> getNumeroCampo() << ".\n";
			r << "Estado campo: " << "Mantenimiento.\n";	
		}
	}
	return r.str();
}


int Parqueo::cantidadEspaciosOcupados ( ) {
	int contadorEspaciosOcupados = 0;
	for(int i = 0; i < cantidad; i++){
		if(lugaresParqueo[i] -> getEstadoCampo() == 'O'){
			contadorEspaciosOcupados++;
		}
	}
	return contadorEspaciosOcupados;
}

int Parqueo::cantidadEspaciosMantenimiento ( ) {
	int contadorEspaciosMantenimiento = 0;
	for(int i = 0; i < cantidad; i++){
		if(lugaresParqueo[i] -> getEstadoCampo() == 'M'){
			contadorEspaciosMantenimiento++;
		}
	}
	return contadorEspaciosMantenimiento;
}

int Parqueo::porcOcupParqueo(){
	return (cantidad*100)/tamano;
}

int Parqueo::cantCampLibres(){
	int campLibres = 0;
	//Aqui puse == nullptr porque campos vacios son campos libres, tecnicamente
	for(int i = 0; i < tamano; i++){
		if(lugaresParqueo[i] == nullptr || lugaresParqueo[i] -> getEstadoCampo() == 'L'){
			campLibres++;
		}
	}
	return campLibres;
}

