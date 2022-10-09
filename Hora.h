#ifndef HORA_H
#define HORA_H
#include <iostream>
#include <cstdlib>
using namespace std;

class Hora {
public:
	Hora(int);
	~Hora();
	void setHoraEntrada(int);
	void setHoraSalida(int);
	int getHoraEntrada();
	int getHoraSalida();
	
private:
	int hora;
};

#endif

