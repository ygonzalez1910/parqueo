#include "ConjuntoVehiculos.h"

ConjuntoVehiculos::ConjuntoVehiculos(int tamano)
	: tamano(10), cantidad(0), 
	vehiculos(new Vehiculo*[tamano]) {
	cout<<"Iniciando Vehiculos"<<endl;
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

Vehiculo* ConjuntoVehiculos::crearCarrito(string marca, string placa, float tonelaje, string color, int entrada){
	
	Hora* hora = new Hora(entrada);
	Cobro* cobro = new Cobro(hora);
	Vehiculo* carrito = new Vehiculo(marca,placa,tonelaje,color,cobro);
	
	agregarVehiculo(carrito);
	
	return carrito;
}


string ConjuntoVehiculos::toStringMostrarVehiculosQueEstenONo ( ) {
	
	stringstream r;
	for(int i=0; i < cantidad; i++){
		r << i <<"."<< vehiculos[i]->toString();
		r << "---------------------\n";
	}
	return r.str();
	
}

double ConjuntoVehiculos::cantidadDineroIngresadoAlDia () {
	
	double dineroTotal = 0;
	for(int i = 0; i < cantidad; i++){
		dineroTotal += vehiculos[i] -> getCobro() -> getTotalPagar(); 
	}
	return dineroTotal;
}

string ConjuntoVehiculos::tonelajeVehiculosMayorUso(){
	
	stringstream x;
	Vehiculo* vehiculoMayorTonelaje;
	vehiculoMayorTonelaje = vehiculos[0];
	
	for(int i = 0; i < cantidad; i++){
		if(vehiculoMayorTonelaje->getTonelaje() < vehiculos[i]->getTonelaje()){
			vehiculoMayorTonelaje = vehiculos[i];
		}
	}
	x << vehiculoMayorTonelaje->toString();
	return x.str();
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


string ConjuntoVehiculos::vehiculosRangoTonelaje () {
	stringstream r;
	int cont = 0;
	
	for(int i = 0; i < cantidad;i++){
		if(vehiculos[i] -> getTonelaje() >= 1.0 && vehiculos[i] -> getTonelaje() <= 1.5){
		cont++;
		}
	}
	
	if(cont != 0){
		for(int i= 0; i < cantidad; i++){
			if(vehiculos[i] -> getTonelaje() > 1.0 && vehiculos[i] -> getTonelaje() < 1.5){
				r << "Los vehiculos que se encuentran en el rango de tonelaje de 1.0 y 1.5 son: \n" << vehiculos[i]-> toString()<<"\n\n";
			}
		}
	}else{
		r << "No hay vehiculos en este rango de tonelaje." <<endl;
	}
	return r.str();
}

double ConjuntoVehiculos::total(string placa,int hsalida){
	
	double pago = 0.0;
	for(int i=0;i<tamano;i++){

		cout<<"Buscando.. "<< endl;
		cout<<vehiculos[i]<< endl;
		if ( vehiculos[i] == nullptr )
		{
			cout<<"Espacio vacio "<<i<< endl;
		}
		if( vehiculos[i] != nullptr && placa == vehiculos[i]->getPlaca()){
			pago=vehiculos[i]->total(hsalida);
		}
		
	}
	cout <<"El pago es de: "<<pago<<"."<<endl;
	return pago;
}


