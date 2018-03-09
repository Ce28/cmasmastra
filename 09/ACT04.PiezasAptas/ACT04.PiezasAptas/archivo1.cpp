#include<iostream>

using namespace std;

void main()
{
	int x = 0;
	int cantidad = 0;
	int n = 0;
	float largo = 0.0;

	cout << "Cuantas piezas procesará: ";
	cin >> n;
		
	x = 1;
	while (x <= n)
	{
		cout << "Ingrese la medida de la pieza: ";
		cin >> largo;

		if (largo >= 1.20 && largo <= 1.30)
		{
			cantidad = cantidad + 1;
		}

		x = x + 1;
	}

	cout << "La cantidad de piezas aptas son: ";
	cout << cantidad;

	cin.get();
	cin.get();
}