#include "Date.h"

Date::Date(string date) {
	this -> date = date;
}

void Date::mostrar() {
	cout << "La cadena es: " << date << endl;
}

void Date::Separar_Cad(string date) {
	string delimiter = "/";
	int cont = 0, dia, mes, year;
	size_t pos = 0;
	string token; 
	while ((pos = date.find(delimiter)) != string::npos) {
		token = date.substr(0, pos);
		date.erase(0, pos + delimiter.length());
		cont++;
		if (cont == 1) {
			dia = stoi(token);
		}
		if (cont == 2) {
			mes = stoi(token);
		}
	} 
	year = stoi(date);
	
	cout << "\nEl dia es:" << dia << "\n" << endl;
	cout << "\nEl mes es:" << mes << "\n" << endl;
	cout << "\nEl año es:" << year << "\n" << endl;

	if (year < 0)
		cout << "Fecha no valida";
	if (mes < 0 || mes > 12)
		cout << "Fecha no valida";
	if (mes == 2) {
		if (year % 4 == 0) {
			if (dia > 29 || dia < 0)
				cout << "Fecha no valida";
		}
		else {
			if(dia > 28 || dia <0)
				cout << "Fecha no valida";
		}
	}
	else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
		if (dia < 31 || dia < 0)
			cout << "Fecha no valida";
	}
	else {
		if (dia > 30 || dia < 0)
			cout << "Fecha no valida";
	}
}