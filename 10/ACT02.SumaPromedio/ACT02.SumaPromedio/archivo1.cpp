#include<iostream>

using namespace std;

void main()
{
	int suma = 0;
	int promedio = 0;
	int valor = 0;

	for (int f = 1; f <= 10; f++)
	{
		cout << "Ingrese un valor: ";
		cin >> valor;
		suma = suma + valor;
	}

	promedio = suma / 10;

	cout << "La suma es: ";
	cout << suma;
	cout << "\n";
	cout << "El promedio es: ";
	cout << promedio;

	cin.get();
	cin.get();
}