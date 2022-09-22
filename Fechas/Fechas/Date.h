#pragma once
#include <iostream>
#include <string>


using namespace std;

class Date
{
private:
	string date;
public:
	Date(string);
	void mostrar();
	void Separar_Cad(string date);
};


