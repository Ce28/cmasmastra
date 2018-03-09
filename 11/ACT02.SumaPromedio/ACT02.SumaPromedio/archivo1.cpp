#include<iostream>

using namespace std;

void main()
{
	int suma = 0;
	int cant = 0;
	int valor = 0;
	int promedio = 0;

	do
	{
		cout << "Ingrese algun valor(0 para finalizar): ";
		cin >> valor;

		if (valor != 0)
		{
			suma += valor;
			cant++;
		}
	}while(valor != 0);

	if (cant != 0)
	{
		promedio = suma / cant;
		cout << "El promedio es: ";
		cout << promedio;
	}
	else
	{
		cout << "No se ingresaron valores";
	}

	cin.get();
	cin.get();
}