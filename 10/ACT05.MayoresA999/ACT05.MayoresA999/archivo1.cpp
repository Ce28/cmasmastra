#include<iostream>

using namespace std;

void main()
{
	int valor = 0;
	int cantidad = 0;
	int n = 0;
	cout << "Ingrese la cantidad de numeros que ingresara: ";
	cin >> n;

	for (int f = 1; f <= n; f++)
	{
		cin >> valor;
		if (valor >= 1000)
		{
			cantidad++;
		}
	}

	cout << "La cantidad de numeros mayores a 1000 es: ";
	cout << cantidad;

	cin.get();
	cin.get();
}