#include "pch.h"
#include <iostream>
using namespace std;
/*
	TEST
	120820166712
*/
int main() {

	//Entrada
	long long cod;//long long por ser 12 digitos
	int DD, MM, AAAA, PP;
	bool perecible;
	char TP;

	cout << "Ingrese el codigo: " << endl;
	cin >> cod;

	//Logica
	DD = cod / 10000000000;//10 ceros
	cod = cod % 10000000000;//10 ceros
	MM = cod / 100000000;//8 ceros
	cod = cod % 100000000;//8 ceros
	AAAA = cod / 10000;//4 ceros
	cod = cod % 10000;//4 ceros
	TP = cod / 100;//2 ceros
	cod % 100;//2 ceros
	PP = cod;
	perecible = (PP < 0);

	//salida 
	cout << "Dia de vencimiento: " << DD << endl;
	cout << "Mes de vencimiento: " << MM << endl;
	cout << "Anio de vencimiento: " << AAAA << endl;
	cout << "El tipo de producto es: " << TP << endl;
	cout << "Producto perecible (0:No / 1:Si): " << perecible << endl;

	system("pause");
	return 0;
}