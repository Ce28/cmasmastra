#include <iostream>

using namespace std;

void main()
{
	char nombre[40];
	int edad;
	cout << "Ingrese nombre: ";
	cin.getline(nombre, 40);
	cout << "Ingrese edad: ";
	cin >> edad;
	cout << "Nombre: ";
	cout << nombre;
	cout << "\n";
	cout << "Edad: ";
	cout << edad;
	cout << "\n";
	if (edad >= 18)
	{
		cout << "Es mayor de edad";
	}
	else
	{
		cout << "No es mayor de edad";
	}

	cin.get();
	cin.get();
}