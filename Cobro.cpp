#include "Cobro.h"

Cobro::Cobro():totalPagar(totalPagar),hora(nullptr){
	
}

Cobro::~Cobro() {
	
}

float Cobro::getTotalPagar ( ) {
	return totalPagar;
}

//Hora* Cobro::getHoras(){
//	return horas;
//}

double Cobro::total(int salida, float tonelaje,string placa){
	
	horaSalida->setHoraSalida(salida);
	int totalHoras = 0;
	double cobroAdicional = 0;
	
	totalHoras = hora -> getHoraSalida() - hora -> getHoraEntrada();
	

	if( tonelaje < 1.0){
		cobroAdicional = 0.0;
	}else if( tonelaje >= 1.0 && tonelaje <= 1.5){
		cobroAdicional = 0.05;
	}else if( tonelaje >= 1.6 && tonelaje <= 3.5){
		cobroAdicional = 0.10;
	}else if( tonelaje >= 3.6 && tonelaje <= 5.0){
		cobroAdicional = 0.15;
	}else{
		cobroAdicional = 0.20;
	}
	totalPagar = (totalHoras * precioHora) * cobroAdicional;
}

//	double totalHoras2 = 0;
//	totalHoras2 = totalHoras;
//	double cobroAdicional = 0;
//	
//	//totalHoras = hora -> getHoraSalida() - hora -> getHoraEntrada();
//	
//	if( tonelaje < 1.0){
//		cobroAdicional = 0.0;
//	}else if( tonelaje >= 1.0 && tonelaje <= 1.5){
//		cobroAdicional = 0.05;
//	}else if( tonelaje >= 1.6 && tonelaje <= 3.5){
//		cobroAdicional = 0.10;
//	}else if( tonelaje >= 3.6 && tonelaje <= 5.0){
//		cobroAdicional = 0.15;
//	}else{
//		cobroAdicional = 0.20;
//	}
//	totalPagar = (totalHoras * precioHora) * cobroAdicional;



