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
		if(lugaresParqueo[i] -> getEstadoCampo() == 'O'){
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
	int cont = 0;
	
	for(int i=0;i<tamano;i++){
		if(lugaresParqueo[i]->getEstadoCampo() == 'O' ){
			cont++;
		}
	}
	return cont;
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
		if(lugaresParqueo[i] -> getEstadoCampo() == 'O'){
			cantVehiculos++;
		}
	}
	return cantVehiculos;
}

string Parqueo::vehiculosDeterminadoCampo(int campo){
	
	stringstream r;
	int cont = 0;
	
	for(int i =0;i<tamano;i++){
		if(lugaresParqueo[i] -> getNumeroCampo() == campo){
			cont++;
		}
	}
	
	
	if(cont != 0){
		r << "Vehiculos del campo " << campo << " : "<<endl;
		for(int i = 0; i < tamano; i++){
		
			if(lugaresParqueo[i] -> getNumeroCampo() == campo){
				r << lugaresParqueo[i] -> getVehiculo() -> toString();
			}
		}
		
	}
		else{
		r << "Ningun vehiculo ha utilizado ese espacio del parqueo...\n";
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



double Parqueo::cobroDeterminadoCampo(int campo){
	
	return lugaresParqueo[campo] -> getIngresoCobro();
}


double Parqueo::seleccionarParqueo(int campo, string placa, int hsalida){
	double pago = 0.0;
	
	for(int i=0;i<tamano;i++){
		
		if( conjuntoVehiculos->vehiculos[i] != nullptr && placa == conjuntoVehiculos->vehiculos[i]->getPlaca()){
			pago=conjuntoVehiculos->vehiculos[i]->total(hsalida);
		}
		
	}

	return pago;
}


