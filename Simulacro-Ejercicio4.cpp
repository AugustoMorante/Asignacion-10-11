
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
//1120677212042015
int main()
{
	//Entrada
	long long cod;
	int UUU, PP, DD, MM, AAAA;
	bool F, hoy;
	string PP1, PP2, PPPP;
	//Logica
	cin >> cod;
	UUU = cod / 10000000000000;//13 ceros
	PP = (cod % 10000000000000) / 1000000000000;
	F = (PP == 0)*'S' + (PP != 0)*'N';
	cod = cod % 1000000000000;
	PP1 = cod / 10000000000;
	cod = cod % 10000000000;
	PP2 = cod / 100000000;
	PPPP = PP1 + PP2;
	cod = cod % 100000000;
	DD = cod / 1000000;
	cod = cod % 1000000;
	MM = cod / 10000;
	cod = cod % 10000;
	AAAA = cod;
	hoy = (AAAA < 2015)*'S' + (AAAA >= 2015)*'N';
	//Salida
	cout << "Numero Unico: ";
	cout << UUU << endl;
	cout << "Fragil: ";
	cout << F << endl;
	cout << "Codigo Pais: ";
	cout << PPPP << endl;
	cout << "Dia Vencimiento: ";
	cout << DD << endl;
	cout << "Mes Vencimiento: ";
	cout << MM << endl;
	cout << "Anio Vencimiento: ";
	cout << AAAA << endl;
	cout << "Bien si vence el día de hoy: ";
	cout << hoy << endl;

	system("pause");
	return 0;

}


