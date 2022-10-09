#ifndef HORA_H
#define HORA_H
#include <iostream>
#include <cstdlib>
using namespace std;

class Hora {
public:
	Hora(int);
	~Hora();
	void setHora(int);
	int getHora();
	
private:
	int hora;
	
};

#endif

