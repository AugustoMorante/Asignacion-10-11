#include "pch.h"
#include <iostream>
using namespace std;
/*
	Sueldo:1800
	Vivienda: M
	Tarjeta: N
	Familia: S
*/
int main()
{
	//Entrada
	int sueldo, puntosSueldo, puntosVivienda, puntosTarjeta, puntosFamilia, puntosTotal;
	char vivienda, tarjeta, familia;
	bool prestamo;
	
	cout << "Insertar Sueldo:\n";
	cin >> sueldo;
	cout << "Tipo de vivienda (Pariente: P - Alquilada: A - Propia: O):\n";
	cin >> vivienda;
	cout << "Tarjeta de Credito (Si: S - No: N):\n";
	cin >> tarjeta;
	cout << "Carga Familiar (Si: S - No: N):\n";
	cin >> familia;
	//Logica
	puntosSueldo = (sueldo < 1500) * 6 + (sueldo >= 1500 && sueldo <= 6000) * 12 + (sueldo > 6000) * 18;
	puntosVivienda = (vivienda == 'P') * 2 + (vivienda == 'A') * 5 + (vivienda == 'M') * 10;
	puntosTarjeta = (tarjeta == 'N') * 0 + (tarjeta == 'S') * 6;
	puntosFamilia = (familia == 'S') * 6 + (familia == 'N') * 0;
	puntosTotal = puntosSueldo + puntosVivienda + puntosTarjeta + puntosFamilia;
	prestamo = (puntosTotal <= 20) * 0 + (puntosTotal > 20) * 1;
	//Salida
	cout << "Puntaje Obtenido: ";
	cout << puntosTotal << endl;
	cout << "Se le otorga prestamo(SI = 1 - NO = 0): ";
	cout << prestamo << endl;
	system("pause");
	return 0;
}