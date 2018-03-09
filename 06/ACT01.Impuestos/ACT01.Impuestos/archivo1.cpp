#include<iostream>

using namespace std;

void main()
{
	float sueldo = 0.0;

	cout << "Ingrese el sueldo: ";
	cin >> sueldo;

	if (sueldo > 3000)
	{
		cout << "Esta persona debe abonar impuestos";
	}

	cin.get();
	cin.get();
}