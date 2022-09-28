#ifndef HORA_H
#define HORA_H
#include <iostream>
#include <cstdlib>
using namespace std;

class Hora {
public:
	Hora(string,string);
	~Hora();
	void setHoraEntrada(string);
	void setHoraSalida(string);
	
private:
	string horaEntrada;
	string horaSalida;
};

#endif

