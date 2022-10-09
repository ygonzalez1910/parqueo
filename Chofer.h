#ifndef CHOFER_H
#define CHOFER_H
#include<iostream>
using namespace std;

class Chofer {
public:
	Chofer(string,string);
	~Chofer();
	void setNombre(string);
	void setCedula(string);
	double total(int, float, string);
	
private:
	string nombre;
	string cedula;
	
};

#endif

