#include<iostream>
using namespace std;
#include "Parqueo.h"
#include "ConjuntoVehiculos.h"
#include "Chofer.h"
#include "Hora.h"
#include "Cobro.h"
#include "InfoDelCampo.h"

int main () {
	
	string nombre=" ", direccion=" ";
	int telefono=0, opc=0;
	int cantEspaciosParqueo=0;
	string nombreChofer = " ";
	string cedulaChofer = " ";
	int horaEntrada = 0, horaSalida = 0;
	int numeroCampo = 0;
	char estadoCampo = ' ';
	int posicionParqueo = 0;
	int campo = 0;
	string marca = " ", placa = " ", color = " ";
	float tonelaje = 0.0;
	int campoCancelar = 0;

//	cout<<"Digite el nombre del Mall."<<endl;
//	cin>>nombre;
//	cout<<"\n";
//	cout<<"Digite el telefono del Mall."<<endl;
//	cin>>telefono;
//	cout<<"\n";
//	cout<<"Digite la direccion del Mall."<<endl;
//	cin>>direccion;
//	cout<<"\n";
	
	cout << "Digite la cantidad de espacios del parqueo del Mall." << endl;
	cin >> cantEspaciosParqueo;
	cout<<"\n";
	
	Parqueo* parqueo= new Parqueo(cantEspaciosParqueo);

	ConjuntoVehiculos* conjuntoVehiculos= new ConjuntoVehiculos(10);
	
	Vehiculo* vehiculo = new Vehiculo(marca,placa,tonelaje,color);
	
	Chofer* chofer = new Chofer(nombreChofer, cedulaChofer);

	Hora* hora = new Hora(horaEntrada,horaSalida);
	
	InfoDelCampo* numCampo = new InfoDelCampo(numeroCampo,estadoCampo);
	
	
//	InfoDelCampo* info = new InfoDelCampo(4, 'O');
//	InfoDelCampo* info2 = new InfoDelCampo(10, 'L');
//	InfoDelCampo* info3 = new InfoDelCampo(6, 'M');
	
//	parqueo->agregarVehiculo(info);
//	parqueo->agregarVehiculo(info2);
//	parqueo->agregarVehiculo(info3);
	
	parqueo -> llenarVacios();
	
//	int espacioEnMantenimiento;
//	for ( int i = 0; i < cantEspaciosParqueo ; i++ ){
//		
//		cout<<"Desea que el campo "<<i<<" este en mantenimiento? 0 = No, 1 = Si"<<endl;
//		cin >> espacioEnMantenimiento;
//		
//		if (espacioEnMantenimiento == 1 ){
//			parqueo->lugaresParqueo[i]->setEstadoCampo('M');
//		}else{
//			parqueo->lugaresParqueo[i]->setEstadoCampo('L');
//		}
//		//parqueo->lugaresParqueo[i]->setEstadoCampo( espacioEnMantenimiento == 1 ? 'M' : 'L' );
//	}
	
	int cantidadEspaciosMantenimiento = 0;
	int numeroEspacioMantenimiento = 0;
	
	cout << "Digite cuantos espacios van a estar en mantenimiento: ";
	cin >> cantidadEspaciosMantenimiento;
	cout<<"\n";
	
	for(int i = 0; i < cantidadEspaciosMantenimiento; i++){
		cout << "Digite los espacios que van a estar en mantenimiento: ";
		cin >> numeroEspacioMantenimiento;
		cout<<"\n";
		parqueo -> lugaresParqueo[numeroEspacioMantenimiento] -> setEstadoCampo('M');
	}
	
	for(;;){
		system("cls");
		cout<<"-------------------------------------MENU---------------------------------------"<<endl;
		cout<<"   Bienvenidos al parqueo de "<<nombre<<"."<<endl;
		cout<<"\t1 - Ver TODOS los campos del parqueo. (solo lugar, estado y placa)"<<endl;
		cout<<"\t2 - Ver solo los campos que estan OCUPADOS.(solo lugar, estado y placa)"<<endl;
		cout<<"\t3 - Ver solo los campos que estan en MANTENIMIENTO.(solo lugar Y estado)"<<endl;
		cout<<"\t4 - Ingresar un vehiculo al parqueo. Solicitar posicion o lugar."<<endl;
		cout<<"\t5 - Cancelar la estancia en el lugar. Realizar el debido cobro del alquiler."<<endl;
		cout<<"\t6 - Ver solo los campos que estan LIBRES. (solo lugar y estado)"<<endl;
		cout<<"\t7 - Saber la cantidad de vehiculos que existen en el parqueo."<<endl;
		cout<<"\t8 - Saber la cantidad de campos libres en el parqueo."<<endl;
		cout<<"\t9 - Saber la cantidad de campos ocupados en el parqueo."<<endl;
		cout<<"\t10 - Saber la cantidad de campos en mantenimiento en el parqueo."<<endl;
		cout<<"\t11 - Saber la cantidad de vehiculos que han ingresado en el dia."<<endl;
		cout<<"\t12 - Saber la cantidad de dinero que ha ingresado al parqueo este dia."<<endl; 
		cout<<"\t13 - Saber la cantidad de dinero que ha ingresado, por un solo campo."<<endl;
		cout<<"\t14 - Saber el tonelaje de los vehiculos que hacen mas uso del parqueo."<<endl; 
		cout<<"\t15 - Saber el porcentaje de ocupacion que tiene el parqueo."<<endl;
		cout<<"\t16 - Mostrar la informacion de los vehiculos que han estado en un determinado campo."<<endl;
		cout<<"\t17 - Mostrar la informacion de todos (que esten o no) los vehiculos del parqueo."<<endl;
		cout<<"\t18 - Mostrar los vehiculos que se encuentran en el rango de tonelaje de 1.0 a 1.5."<<endl;
		cout<<"\t19 - Salir."<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<"Digite la opcion a realizar: ";
		cin>>opc;
		cout<<endl;
		
		if(opc == 1){
			system("cls");
			cout << parqueo -> toString();
			system("pause");
			
		}else if(opc == 2){
			system("cls");
			cout << parqueo -> toStringOcupados();
			system("pause");
			
			
		}else if(opc == 3){
			system("cls");
			cout << parqueo -> toStringMantenimiento();
			system("pause");
			
			
		}else if(opc == 4){
			system("cls");
			
			//el sistema le debera permitir, 
			//ingresar la informacion basica del vehiculo, del chofer, la hora 
			//de entrada y del numero de campo que esto siendo utilizado
			
			cout <<"Lugares del parqueo...\n";
			cout << parqueo -> toString();
			
			cout << "Seleccione el lugar del parqueo que desea ocupar:";
			cin >> posicionParqueo;
				
				
			if( posicionParqueo != numCampo -> getEstadoCampo() ){
				
				conjuntoVehiculos ->  seleccionarParqueo(posicionParqueo);
					
					numCampo -> estadoOcupado();
						
						if(conjuntoVehiculos->estaLleno() == false){
							
							
						if ( parqueo ->lugaresParqueo[posicionParqueo]->getEstadoCampo() == 'L' ){
							system("cls");
							cout<<"Datos del chofer: \n";
							cout << "Digite su nombre: ";
							cin >> nombreChofer;
							chofer -> setNombre(nombreChofer);
							cout << "Digite su cedula: ";
							cin >> cedulaChofer;
							chofer -> setCedula(cedulaChofer);
							cout<<"\n\nDatos del vehiculo: \n";
							cout << "Ingrese la marca de su vehiculo: ";
							cin >> marca;
							vehiculo -> setMarca(marca);
							cout << "Ingrese la placa de su vehiculo: ";
							cin >> placa;
							vehiculo -> setPlaca(placa);
							cout << "Ingrese el tonelaje de su vehiculo: ";
							cin >> tonelaje;
							vehiculo -> setTonelaje(tonelaje);
							cout << "Ingrese el color: ";
							cin >> color;
							vehiculo -> setColor(color);
							cout << "Ingrese la hora de entrada en formato 24 horas: ";
							cin >> horaEntrada;
							hora -> setHoraEntrada(horaEntrada);
							cout << "Ingrese la hora de salida en formato 24 horas: ";
							cin >> horaEntrada;
							hora -> setHoraEntrada(horaSalida);
							
							Vehiculo* vehiculo = conjuntoVehiculos->crearCarrito(marca,placa,tonelaje,color);
							
							
							parqueo ->lugaresParqueo[posicionParqueo]->setVehiculo(vehiculo);
							parqueo ->lugaresParqueo[posicionParqueo]->setEstadoCampo('O');
							
							vehiculo->toString();
							
							//parqueo ->lugaresParqueo[posicionParqueo]->toString();
							
							
							//info->setVehiculo( vehiculo );
							//parqueo->agregarVehiculo(info);
							}
							else{
								cout << "Espacio ocupado o en mantenimiento -> Vehiculo no fue agregado";
								
							}
								
							cout << endl;
							cout << conjuntoVehiculos -> toString()<<"\n";
							}else{
								cout <<"\nYa no puede registrar mas vehiculos en ese parqueo.";
							}
						cout <<"\nLas vehiculos registradas son:\n";
						cout << conjuntoVehiculos->toString();
			}
			system("pause");
		}else if(opc == 5){
			system("cls");
			cout << "Que campo desea cancelar: "; 
			cin>>campoCancelar;
			parqueo -> cobroTotal(campoCancelar, vehiculo -> getTonelaje(), hora -> getHoraEntrada(), hora -> getHoraSalida());
			parqueo -> lugaresParqueo[campoCancelar] -> setEstadoCampo('L');
			system("pause");
			
		}else if(opc == 6){
			system("cls");
			cout<< parqueo -> toStringLibres();
			system("pause");

			
		}else if(opc == 7){
			system("cls");
			cout<< parqueo -> toStringLibres();

			
		}else if(opc == 8){
			system("cls");
			cout << "Cantidad de espacios libres en todo el parqueo: " << parqueo -> cantCampLibres() << endl;
			system("pause");

			
		}else if(opc == 9){
			system("cls");
			cout << "Cantidad de espacios ocupados en todo el parqueo: " << parqueo -> cantidadEspaciosOcupados();
			system("pause");

			
		}else if(opc == 10){
			system("cls");
			cout << "Cantidad de espacios en mantenimiento en todo el parqueo: " << parqueo -> cantidadEspaciosMantenimiento() << endl;
			system("pause");
			
			
		}else if(opc == 11){
			system("cls");
			
			cout << "El total de vehiculos que han ingresado en el dia es de: " << conjuntoVehiculos -> TotalVehiculosDia()<<endl;
			
			system("pause");
			
		}else if(opc == 12){
			system("cls");
			
			cout << "La cantidad de dinero ingresado en el dia es de: "<< conjuntoVehiculos -> cantidadDineroIngresadoAlDia()<<endl;
			
			system("pause");
		}else if(opc == 13){
			system("cls");
			int campoDigitado;
			cout << "Digite el numero de campo que desea saber cual ha sido el monto obtenido total: " << endl;
			cin >> campoDigitado;
			cout << parqueo -> cobroDeterminadoCampo(campoDigitado);
			system("pause");
			
		}else if(opc == 14){
			system("cls");
			
			cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"A continuacion se mostraran los productos de mayor existencia..."<<endl;
			cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
			
			system("pause");
			
		}else if(opc == 15){
			system("cls");
			cout << "La ocupacion del parqueo es del: "<< parqueo->porcOcupParqueo()<<"%.\n"; 
			system("pause");
		}else if(opc == 16){
			system("cls");
			
			cout << "Digite el numero de campo que desea saber cuales vehiculos han estado: " << endl;
			cin >> campo;
			cout << parqueo -> vehiculosDeterminadoCampo(campo);
			
			system("pause");
		}else if(opc == 17){
			system("cls");
			
			conjuntoVehiculos -> toStringMostrarVehiculosQueEstenONo();
			
			system("pause");
		}else if(opc == 18){
			system("cls");
			
			parqueo -> vehiculosRangoTonelaje( vehiculo -> getTonelaje() );
			
			system("pause");
		}else if(opc == 19){
			system("cls");
			cout<<endl<<"Fin del programa, muchas gracias..."<<endl;
			return 0;
		}else{
			system("cls");
			cout<<"Opcion invalida, por favor ingrese otra de las disponibles en el menu."<<endl;
			system("pause");
		}
	}	
}


