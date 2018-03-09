#include<iostream>

using namespace std;

void main()
{
	int num1 = 0;
	int num2 = 0;
	int suma = 0;
	int producto = 0;

	cout << "Ingrese primer valor: ";
	cin >> num1;
	cout << "Ingrese segundo valor: ";
	cin >> num2;

	suma = num1 + num2;
	producto = num1 * num2;

	cout << "La suma es: ";
	cout << suma;
	cout << "\n";
	cout << "El producto es: ";
	cout << producto;

	cin.get();
	cin.get();
}