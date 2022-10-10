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
	int entrada = 0, hsalida = 0;
	int numeroCampo = 0;
	char estadoCampo = ' ';
	int posicionParqueo = 0;
	string marca = " ", placa = " ", color = " ", placa2 = " ";
	float tonelaje = 0.0;
	int campo = 0;
	int campoInfo = 0;
	
	cout<<"Digite el nombre del Mall."<<endl;
	cin>>nombre;
	cout<<"\n";
	cout<<"Digite el telefono del Mall."<<endl;
	cin>>telefono;
	cout<<"\n";
	cout<<"Digite la direccion del Mall."<<endl;
	cin>>direccion;
	cout<<"\n";
	
	cout << "Digite la cantidad de espacios del parqueo del Mall." << endl;
	cin >> cantEspaciosParqueo;
	cout<<"\n";
	
	Parqueo* parqueo= new Parqueo(cantEspaciosParqueo);

	Hora* hora = new Hora(entrada);
	
	Cobro* cobro = new Cobro(hora);
	
	ConjuntoVehiculos* conjuntoVehiculos= new ConjuntoVehiculos(10);
	
	Vehiculo* vehiculo = new Vehiculo(marca,placa,tonelaje,color, cobro);
	
	Chofer* chofer = new Chofer(nombreChofer, cedulaChofer);

	InfoDelCampo* numCampo = new InfoDelCampo(numeroCampo,estadoCampo);
	
	parqueo -> llenarVacios();
	
	parqueo->conjuntoVehiculos = conjuntoVehiculos;
	
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
		cout<<"\t1 - Ver TODOS los campos del parqueo. (solo lugar, estado y placa)"<<endl; //listo
		cout<<"\t2 - Ver solo los campos que estan OCUPADOS.(solo lugar, estado y placa)"<<endl;//listo
		cout<<"\t3 - Ver solo los campos que estan en MANTENIMIENTO.(solo lugar Y estado)"<<endl;//listo
		cout<<"\t4 - Ingresar un vehiculo al parqueo. Solicitar posicion o lugar."<<endl;//listo
		cout<<"\t5 - Cancelar la estancia en el lugar. Realizar el debido cobro del alquiler."<<endl;//listo
		cout<<"\t6 - Ver solo los campos que estan LIBRES. (solo lugar y estado)"<<endl;//listo
		cout<<"\t7 - Saber la cantidad de vehiculos que existen en el parqueo."<<endl;//listo
		cout<<"\t8 - Saber la cantidad de campos libres en el parqueo."<<endl;//listo
		cout<<"\t9 - Saber la cantidad de campos ocupados en el parqueo."<<endl;//listo
		cout<<"\t10 - Saber la cantidad de campos en mantenimiento en el parqueo."<<endl;//listo
		cout<<"\t11 - Saber la cantidad de vehiculos que han ingresado en el dia."<<endl;//listo
		cout<<"\t12 - Saber la cantidad de dinero que ha ingresado al parqueo este dia."<<endl; //listo
		cout<<"\t13 - Saber la cantidad de dinero que ha ingresado, por un solo campo."<<endl;//listo
		cout<<"\t14 - Saber el tonelaje de los vehiculos que hacen mas uso del parqueo."<<endl; //listo
		cout<<"\t15 - Saber el porcentaje de ocupacion que tiene el parqueo."<<endl;//listo
		cout<<"\t16 - Mostrar la informacion de los vehiculos que han estado en un determinado campo."<<endl; //listo
		cout<<"\t17 - Mostrar la informacion de todos (que esten o no) los vehiculos del parqueo."<<endl; //listo
		cout<<"\t18 - Mostrar los vehiculos que se encuentran en el rango de tonelaje de 1.0 a 1.5."<<endl;//listo
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
							
						if	( parqueo ->lugaresParqueo[posicionParqueo]->contadorUsos == 0 )
						{
							cout<<"Este campo no esta disponible. Ya se uso 10 veces";
						}
							
						else if ( parqueo ->lugaresParqueo[posicionParqueo]->getEstadoCampo() == 'L' ){
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
							cin >> entrada;
							hora -> setHora(entrada);
							
							Vehiculo* vehiculo = conjuntoVehiculos->crearCarrito(marca,placa,tonelaje,color,entrada);
							
							parqueo ->lugaresParqueo[posicionParqueo]->setVehiculo(vehiculo);
							parqueo ->lugaresParqueo[posicionParqueo]->setEstadoCampo('O');
							parqueo -> lugaresParqueo[posicionParqueo]->contadorUsos--;
							
							cout <<"\nEl vehiculo registrado es:\n";
							
							}else if(parqueo ->lugaresParqueo[posicionParqueo]->getEstadoCampo() == 'O' || parqueo ->lugaresParqueo[posicionParqueo]->getEstadoCampo() == 'M'){
								cout << "Espacio ocupado o en mantenimiento -> Vehiculo no fue agregado";
								cout << endl;
							}else{
								cout <<"\nYa no puede registrar mas vehiculos en ese parqueo.";
							}
						
							cout << conjuntoVehiculos->toString();
						
						}
						}
			system("pause");
		}else if(opc == 5){
			system("cls");
			
			cout << "Digite el campo que desea cancelar: "<<endl;
			cin>>campo;
			cout << "Digite hora de salida en formato 24h: "<<endl;
			cin>>hsalida;
			cout << "Digite la placa para identificar su vehiculo: "<<endl;
			cin>>placa2;
			
			Vehiculo* vehiCobro;
			

			if (parqueo -> lugaresParqueo[campo]->getVehiculo() != nullptr && parqueo -> lugaresParqueo[campo]->getVehiculo()->getPlaca() == placa2){
				vehiCobro = parqueo -> lugaresParqueo[campo] -> getVehiculo();
				parqueo -> lugaresParqueo[campo]->setVehiculo(nullptr);
				parqueo -> lugaresParqueo[campo]->setEstadoCampo('L');
				
				double totalPagado = parqueo -> seleccionarParqueo(campo,placa2,hsalida);
				
				cout << "El total a pagar es de "<< totalPagado <<". "<<endl;
				
				vehiCobro -> getCobro() -> setTotalPagar(totalPagado);
				
				double ingresoCobro = parqueo -> lugaresParqueo[campo] -> getIngresoCobro();

				parqueo -> lugaresParqueo[campo] -> setIngresoCobro(totalPagado+ingresoCobro);
				
				
			}else{
				cout << "Vehiculo no encontrado." <<endl;
			}

			//parqueo -> lugaresParqueo[campo] -> setEstadoCampo('L');
			
			system("pause");
		}else if(opc == 6){
			system("cls");
			
			cout<< parqueo -> toStringLibres();
			
			system("pause");
		}else if(opc == 7){
			system("cls");
			cout<< "La cantidad de vehiculos que existe en el parqueo es de: " <<parqueo -> cantVehiculosParqueo()<<endl;
			system("pause");
			
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
			
			if(parqueo -> lugaresParqueo[campoDigitado] -> getIngresoCobro() != 0){
			cout << parqueo -> cobroDeterminadoCampo(campoDigitado)<<endl;
			}else{
				cout<<"Este campo no ha sido pagado."<<endl;
			}
			
			system("pause");
			
		}else if(opc == 14){
			system("cls");
			
			cout<<"A continuacion se mostraran los vehiculos de mayor tonelaje..."<<endl;
			cout<<conjuntoVehiculos -> tonelajeVehiculosMayorUso();
			
			system("pause");
			
		}else if(opc == 15){
			system("cls");
			int porcentaje = 0;
			porcentaje = (parqueo->porcOcupParqueo()*100)/cantEspaciosParqueo;
			cout << "La ocupacion del parqueo es del: "<< porcentaje <<"%.\n";
			
			system("pause");
		}else if(opc == 16){
			system("cls");
			
			cout << "Digite el campo donde desea ver la informacion: ";
			cin >> campoInfo;
			
			if(campoInfo<=cantEspaciosParqueo && campoInfo>=0){
				cout<<parqueo->vehiculosDeterminadoCampo(campoInfo);
			}else{
				cout<<"Campo no existe en el parqueo."<<endl;
			}
			
			system("pause");
		}else if(opc == 17){
			system("cls");
			
			cout << conjuntoVehiculos -> toStringMostrarVehiculosQueEstenONo();
			
			system("pause");
		}else if(opc == 18){
			system("cls");
			
			if(vehiculo->getTonelaje() > 1.0 && vehiculo->getTonelaje() < 1.5){
				cout << conjuntoVehiculos -> vehiculosRangoTonelaje();
			}
			else{
				cout << "No hay vehiculos dentro del rango de tonelaje." << endl;
			}
			
			system("pause");
		}else if(opc == 19){
			system("cls");
			
			cout<<endl<<"Fin del programa, muchas gracias por apoyar a Yuli y Jeremy..."<<endl;
			
			return 0;
		}else{
			system("cls");
			
			cout<<"Opcion invalida, por favor ingrese otra de las disponibles en el menu."<<endl;
			
			system("pause");
		}
	}	
	}


