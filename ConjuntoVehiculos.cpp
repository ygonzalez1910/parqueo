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
			r << i <<"."<< vehiculos[i]->toString();
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

void ConjuntoVehiculos::crearCarrito(string marca, string placa, float tonelaje, string color){
	
	Vehiculo* carrito = new Vehiculo(marca,placa,tonelaje,color);
	
	agregarVehiculo(carrito);

}


string ConjuntoVehiculos::toStringMostrarVehiculosQueEstenONo ( ) {
	
	stringstream r;
	for(int i=0; i < cantidad; i++){
		r << i <<"."<< vehiculos[i]->toString();
	}
	return r.str();
	
}

