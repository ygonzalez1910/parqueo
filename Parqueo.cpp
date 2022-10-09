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
	
	cout<<"\t\tCampos del parqueo: ";
	cout << "\n-----------------------------------------------------\n";
	for(int i = 0; i < tamano; i++){
			r << lugaresParqueo[i]-> toString();	
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
		if(lugaresParqueo[i] -> getEstadoCampo() == 'L'){
			r << "Numero campo: " <<lugaresParqueo[i] -> getNumeroCampo() << ".\n";
			r << "Estado campo: " << "Libre.\n";	
		}
	}
	return r.str();
}

string Parqueo::toStringOcupados ( ) {
	
	stringstream r;
	int hola = 0;
	
	for(int i = 0; i<cantidad;i++){
		if(lugaresParqueo[i] -> getEstadoCampo() == 'M'){
			hola++;
		}
	}
	
	if(hola != 0){
		r << "Campos ocupados: \n";
		for(int i=0; i < cantidad; i++){
			if(lugaresParqueo[i] -> getEstadoCampo() == 'O'){
				r << i+1 <<".\n"<< lugaresParqueo[i]->toString()<<"\n";	
			}
		}
	}else{
		r << "No hay campos ocupados."<<endl;
	}
	return r.str();
}

string Parqueo::toStringMantenimiento ( ) {
	stringstream r;
	int hola = 0;
	
	for(int i = 0; i<cantidad;i++){
		if(lugaresParqueo[i] -> getEstadoCampo() == 'M'){
			hola++;
		}
	}
	
	if(hola != 0){
		r << "Campos en mantenimiento: \n";
		for(int i=0; i < cantidad; i++){
			if(lugaresParqueo[i] -> getEstadoCampo() == 'M'){
				r << "Numero campo: " <<lugaresParqueo[i] -> getNumeroCampo() << ".\n";
				r << "Estado campo: " << "Mantenimiento.\n";	
			}
		}
	}else{
		r << "No hay campos en mantenimiento."<<endl;
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
	for(int i = 0; i < tamano; i++){
		if(lugaresParqueo[i] -> getEstadoCampo() == 'L'){
			campLibres++;
		}
	}
	return campLibres;
}


int Parqueo::cantVehiculosParqueo ( ) {
	int cantVehiculos = 0;
	
	for(int i = 0; i < tamano; i++){
		if(lugaresParqueo[i] -> getEstadoCampo() == 'O' || lugaresParqueo[i] -> getEstadoCampo() == 'L' || lugaresParqueo[i] -> getEstadoCampo() == 'M'){
			cantVehiculos++;
		}
	}
	return cantVehiculos;
}

string Parqueo::vehiculosDeterminadoCampo(int campo){
	
	stringstream r;
	r << "Vehiculos del campo " << campo << " : "<<endl;
	for(int i = 0; i < tamano; i++){
		
		if(lugaresParqueo[i] -> getNumeroCampo() == campo){
			r << lugaresParqueo[i] -> toString();
		}else{
			r << "Ningun vehiculo ha utilizado ese espacio del parqueo...\n";
		}
	}
	return r.str();
}

void Parqueo::llenarVacios(){
	
	for(int i = 0; i < tamano; i++){
		if(lugaresParqueo[i] == nullptr){
			agregarVehiculo(new InfoDelCampo(i,'L'));
		}
	}	
}

void Parqueo::asignarContVehi(){
	for(int i = 0; i < tamano; i++){
		lugaresParqueo[i]->setVehiculos(new ConjuntoVehiculos(10));
	}
}


string Parqueo::vehiculosRangoTonelaje (double tonelaje) {
	stringstream r;
	for(int i= 0; i < cantidad; i++){
		if( tonelaje > 1.0 && tonelaje < 1.5){
			r << "Los vehiculos que se encuentran en el rango de tonelaje de 1.0 y 1.5 son: \n" << lugaresParqueo[i]->toString() << endl;
		}else{
			cout << "No se encontraron vehiculos en ese rango..." << endl;
		}
	}
	return r.str();
}

double Parqueo::cobroDeterminadoCampo(int campo){
	
	double dineroTotal;
	for(int i = 0; i < tamano; i++){
		if(lugaresParqueo[i] -> getNumeroCampo() == campo){
			for(int i = 0; i < cantidad; i++){
				dineroTotal += cobro -> getTotalPagar();
			}
		}else if( campo != lugaresParqueo[i] -> getEstadoCampo()){
			cout << "El numero de campo digitado no existe...\n" << endl;
		}
	}
	return dineroTotal;
}

double Parqueo::seleccionarParqueo(int campo,Hora* horaSalida, string placa, Hora* horaEntrada){
	
	//Cobro* cobro = new Cobro(horaEntrada, horaSalida);
	
	return lugaresParqueo[campo]->cobrarParqueo(horaSalida,placa, horaEntrada);
}

