#include<iostream>

using namespace std;

void main()
{
	int dia = 0;
	int mes = 0;
	int a�o = 0;

	cout << "Ingrese numero de dia: ";
	cin >> dia;
	cout << "Ingrese numero de mes: ";
	cin >> mes;
	cout << "Ingrese numero de a�o: ";
	cin >> a�o;

	if (mes == 1 || mes == 2 || mes == 3)
	{
		cout << "Corresponde al primer trimestre";
	}

	cin.get();
	cin.get();
}