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
	string toString();
	
private:
	string nombre;
	string cedula;
	
};

#endif

