#include<iostream>

using namespace std;

void main()
{
	int x = 0;
	int suma = 0;
	int valor = 0;
	int promedio = 0;

	x = 1;
	while (x <= 10)
	{
		cout << "Ingrese un valor: ";
		cin >> valor;
		suma = suma + valor;
		x = x + 1;
	}
	promedio = suma / 10;

	cout << "La suma de los 10 valores es: ";
	cout << suma;
	cout << "\n";
	cout << "El promedio es: ";
	cout << promedio;

	cin.get();
	cin.get();
}