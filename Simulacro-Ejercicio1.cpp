#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//Entrada
	double aniosExp, sueldoAnio, sueldoTotal;
	char letraNacimiento;

	//Logica
	cout << "Anios de experiencia del trabajador" << endl;
	cin >> aniosExp;
	cout << "Letra refieriendoce al anio de nacimiento" << endl << "Escriba 'l' si nacio en Lima o 'f' si nacio fuera de Lima\n";
	cin >> letraNacimiento;
	sueldoAnio = (aniosExp >= 1 && aniosExp <= 5)*(900 + aniosExp / 100 * 900) + (aniosExp > 5)*(1000 + aniosExp / 100 * 900);
	sueldoTotal = (letraNacimiento == 'l')*sueldoAnio*1.15 + (letraNacimiento == 'f')*sueldoAnio*1.20;

	//Salida
	cout << "El sueldo del trabajador es: \n" << sueldoTotal << endl;

	system("pause");
	return 0;
}

/*
	TEST-1
	Años:4
	Fuera de Lima.
	TEST-2
	Años:6
	Nace en Lima.
*/