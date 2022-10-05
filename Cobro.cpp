#include "Cobro.h"

Cobro::Cobro(Hora* totalHoras, double precioHora):precioHora(precioHora){
	
}

Cobro::~Cobro() {
	
}

double Cobro::totalAPagar (float tonelaje ) {

	double cobroAdicional;
	if(tonelaje <= 1.0 && tonelaje <= 1.5){
		cobroAdicional = 0.05;
	}else if(tonelaje <= 1.6 && tonelaje <= 3.5){
		cobroAdicional = 0.10;
	}else if(tonelaje <= 3.6 && tonelaje <= 5.0){
		cobroAdicional = 0.15;
	}else{
		cobroAdicional = 0.20;
	}

}

//double descuento(double costoTransporte){ //funcion que calcule el descuento
//	
//	double resultado = 0;
//	double descuento = 0;
//	if(costoTransporte >= 50000){
//		descuento = 0.15;
//	}
//	else if(costoTransporte < 50000 && costoTransporte >= 30000){
//		descuento = 0.10;
//	}
//	else if(costoTransporte < 30000 ){
//		descuento = 0.05;
//	}
//	else{
//		cout << "Costos no tienen descuento"<<endl;
//		
//	}
//	resultado = costoTransporte * descuento;
//	
//	return resultado;
//}
	
