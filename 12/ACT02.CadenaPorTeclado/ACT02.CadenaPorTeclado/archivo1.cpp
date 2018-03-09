#include<iostream>

using namespace std;

void main()
{
	char nombre[40];
	cout << "Ingrese su nombre: ";
	cin.getline(nombre, 40);
	cout << "El nombre ingresado es: ";
	cout << nombre;

	cin.get();
}