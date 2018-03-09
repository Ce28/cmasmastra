#include<iostream>

using namespace std;

void main()
{
	int num3 = 0;
	int num5 = 0;
	int valor = 0;

	for (int f = 1; f <= 10; f++)
	{
		cout << "Ingrese un valor: ";
		cin >> valor;

		if (valor%3 == 0)
		{
			num3++;
		}
		if (valor%5 == 0)
		{
			num5++;
		}
	}

	cout << "La cantidad de numeros multiplos de 3 es: ";
	cout << num3;
	cout << "\n";
	cout << "La cantidad de numeros multiplos de 5 es: ";
	cout << num5;

	cin.get();
	cin.get();
}