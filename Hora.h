#ifndef HORA_H
#define HORA_H
#include <iostream>
#include <cstdlib>
using namespace std;

class Hora {
public:
	Hora(string,string);
	~Hora();
	string setHoraEntrada();
	string setHoraSalida();
	
private:
	string horaEntrada;
	string horaSalida;
};

#endif

