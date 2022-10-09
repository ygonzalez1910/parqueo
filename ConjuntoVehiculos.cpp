#include "ConjuntoVehiculos.h"

ConjuntoVehiculos::ConjuntoVehiculos(int tamano)
	: tamano(10), cantidad(0), 
	vehiculos(new Vehiculo*[tamano]) {
	for(int i=0; i < tamano; i++){
		vehiculos[i] = nullptr;
	}
}

ConjuntoVehiculos::~ConjuntoVehiculos() {
	delete [] vehiculos;
}
void ConjuntoVehiculos::agregarVehiculo (Vehiculo* vehiculo ) {
	vehiculos[cantidad++] = vehiculo;
}

string ConjuntoVehiculos::toString ( ) {
	stringstream r;
	for(int i=0; i < cantidad; i++){
		if(vehiculos[i] != nullptr){
			r << i <<".\n"<< vehiculos[i]->toString();
		
		}
	}
	return r.str();
}

bool ConjuntoVehiculos::estaLleno(){
	return cantidad == 10;
}

Vehiculo* ConjuntoVehiculos::seleccionarParqueo (int posicion) {
	if(posicion >=0 && posicion < tamano){
		return vehiculos[posicion];
	}else{
		return nullptr;
	}
}

Vehiculo* ConjuntoVehiculos::crearCarrito(string marca, string placa, float tonelaje, string color, Hora* hora){
	
	Vehiculo* carrito = new Vehiculo(marca,placa,tonelaje,color,hora);
	
	agregarVehiculo(carrito);
	
	return carrito;
}


string ConjuntoVehiculos::toStringMostrarVehiculosQueEstenONo ( ) {
	
	stringstream r;
	for(int i=0; i < cantidad; i++){
		r << i <<"."<< vehiculos[i]->toString();
	}
	return r.str();
	
}

double ConjuntoVehiculos::cantidadDineroIngresadoAlDia () {
	
	double dineroTotal = 0;
	for(int i = 0; i < cantidad; i++){
		dineroTotal += cobro -> getTotalPagar();
	}
	return dineroTotal;
}

void ConjuntoVehiculos::tonelajeVehiculosMayorUso ( ) {
	
	int posicionMayorUso=0;
	Vehiculo* vehiculosMayorTonelaje[cantidad]; 
	int cantidad=0; 
	
	for(int i=0;i<tamano;i++){
		if( vehiculos[posicionMayorUso] -> getTonelaje() < vehiculos[i] -> getTonelaje()){
			posicionMayorUso=i; 
		}
	}
	
	for(int i=0;i<tamano;i++){ 
		if(vehiculos[posicionMayorUso] -> getTonelaje() == vehiculos[i] -> getTonelaje()){
			vehiculosMayorTonelaje[cantidad++]=vehiculos[i]; 
		}
	}
	
	for(int i=0;i<cantidad;i++){ 
		cout<<vehiculos[i] -> toString()<<endl;
	}
	
}

int ConjuntoVehiculos::TotalVehiculosDia(){
	
	int contTotalVehiculosDia = 0;
	
	for(int i = 0; i < tamano; i++){
		if(vehiculos[i] != nullptr){
			contTotalVehiculosDia++;
		}
	}
	return contTotalVehiculosDia;
}

double ConjuntoVehiculos::totalPagar(int salida,string placa){
	double total = 0;
	
	for(int i = 0; i< cantidad; i++){
		if(vehiculos[i] -> getPlaca()== placa){
			total = vehiculos[i]->totalPagar(salida);
		}
	}
}

