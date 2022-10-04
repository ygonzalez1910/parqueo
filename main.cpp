#include<iostream>
using namespace std;
#include "Parqueo.h"
#include "Cobro.h"
#include "Hora.h"
#include "ConjuntoVehiculos.h"

int main () {
	
	string nombre=" ", direccion=" ";
	int telefono=0, opc=0;
	int cantEspaciosParqueo=0;
	
//	cout<<"Digite el nombre del Mall."<<endl;
//	cin>>nombre;
//	cout<<"Digite el telefono del Mall."<<endl;
//	cin>>telefono;
//	cout<<"Digite la direccion del Mall."<<endl;
//	cin>>direccion;
	
	cout << "Digite la cantidad de espacios del parqueo del Mall." << endl;
	cin >> cantEspaciosParqueo;

	Parqueo* parqueo= new Parqueo(cantEspaciosParqueo);
	
	InfoDelCampo* info = new InfoDelCampo(4, 'O');
	
	parqueo->agregarVehiculo(info);

    Hora* hora = new Hora( "6", "10");
    Cobro* cobro = new Cobro( hora, 800 );
    Vehiculo* vehiculo = new Vehiculo();
    cobro->totalAPagar( vehiculo->getTonelaje() );

	
	for(;;){
		cout<<"-----------------------MENU-----------------------"<<endl;
		cout<<"Bienvenidos al parqueo de "<<nombre<<" ."<<endl;
		cout<<"1 - Ver TODOS los campos del parqueo. (solo lugar, estado y placa)"<<endl;
		cout<<"2 - Ver solo los campos que estan OCUPADOS.(solo lugar, estado y placa)"<<endl;
		cout<<"3 - Ver solo los campos que estan en MANTENIMIENTO.(solo lugar Y estado)"<<endl;
		cout<<"4 - Ingresar un vehiculo al parqueo. Solicitar posicion o lugar."<<endl;
		cout<<"5 - Cancelar la estancia en el lugar. Realizar el debido cobro del alquiler."<<endl;
		cout<<"6 - Ver solo los campos que estan LIBRES. (solo lugar y estado)"<<endl;
		cout<<"7 - Saber la cantidad de vehiculos que existen en el parqueo."<<endl;
		cout<<"8 - Saber la cantidad de campos libres en el parqueo."<<endl;
		cout<<"9 - Saber la cantidad de campos ocupados en el parqueo."<<endl;
		cout<<"10 - Saber la cantidad de campos en mantenimiento en el parqueo."<<endl;
		cout<<"11 - Saber la cantidad de vehiculos que han ingresado en el dia."<<endl;
		cout<<"12 - Saber la cantidad de dinero que ha ingresado al parqueo este dia."<<endl;
		cout<<"13 - Saber la cantidad de dinero que ha ingresado, por un solo campo."<<endl;
		cout<<"14 - Saber el tonelaje de los vehiculos que hacen mas uso del parqueo."<<endl;
		cout<<"15 - Saber el porcentaje de ocupacion que tiene el parqueo."<<endl;
		cout<<"16 - Mostrar la informacion de los vehiculos que han estado en un determinado campo."<<endl;
		cout<<"17 - Mostrar la informacion de todos (que esten o no) los vehiculos del parqueo."<<endl;
		cout<<"18 - Mostrar los vehiculos que se encuentran en el rango de tonelaje de 1.0 a 1.5."<<endl;
		cout<<"19 - Salir."<<endl;
		
		cout<<"--------------------------------------------------"<<endl;
		cout<<"Digite la opcion a realizar: ";
		cin>>opc;
		cout<<endl;
		
		switch(opc){
		case 1:
			system("cls");
			cout << parqueo-> toString();
			system("pause");
			break;
		case 2:
			system("cls");
			cout << parqueo-> toStringOcupados();
			system("pause");
			break;
		case 3:
			system("cls");
			cout << parqueo-> toStringMantenimiento();
			system("pause");
			break;
		case 4:
			system("cls");
			
			system("pause");
			break;
		case 5:
			system("cls");
			
			system("pause");
			break;
		case 6:
			system("cls");
			cout<< parqueo-> toStringLibres();
			system("pause");
			break;
		case 7:
			system("cls");
			
			break;
		case 8:
			system("cls");
			parqueo-> cantidadEspaciosLibres();
			system("pause");
			break;
		case 9:
			system("cls");
			parqueo-> cantidadEspaciosOcupados();
			system("pause");
			break;
		case 10:
			system("cls");
			parqueo-> cantidadEspaciosMantenimiento();
			system("pause");
			break;
		case 11:
			system("cls");
			
			system("pause");
			break;
		case 12:
			system("cls");
			
			system("pause");
			break;
		case 13:
			system("cls");
			
			system("pause");
			break;
		case 14:
			system("cls");
			
			system("pause");
			break;
		case 15:
			system("cls");
			
			system("pause");
			break;
		case 16:
			system("cls");
			
			system("pause");
			break;
		case 17:
			system("cls");
			
			system("pause");
			break;
		case 18:
			system("cls");
			
			system("pause");
			break;
		case 19:
			system("cls");
			
			system("pause");
			break;
		case 20:
			system("cls");
			cout<<endl<<"Fin del programa, muchas gracias."<<endl;
			return 0;
			break;
		default:
			system("cls");
			cout<<"Opcion invalida, por favor ingrese otra de las disponibles en el menu."<<endl;
			system("pause");
			break;
		}
	}	
}

