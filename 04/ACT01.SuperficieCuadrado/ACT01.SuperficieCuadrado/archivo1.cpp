#include<iostream>

using namespace std;

void main()
{
	int lado = 0;
	int superficie = 0;

	cout << "Ingrese el valor del lado del cuadrado: ";
	cin >> lado;
	
	superficie = lado * lado;

	cout << "La superficie del cuadrado es: ";
	cout << superficie;

	cin.get();
	cin.get();
}