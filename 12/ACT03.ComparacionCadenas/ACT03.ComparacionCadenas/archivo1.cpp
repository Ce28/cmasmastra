#include<iostream>

using namespace std;

void main()
{
	char cadena1[50];
	char cadena2[50];

	cout << "Ingrese la primer cadena: ";
	cin.getline(cadena1, 50);
	cout << "Ingrese la segunda cadena: ";
	cin.getline(cadena2, 50);

	if (strcmp(cadena1,cadena2) == 0)
	{
		cout << "Son iguales";
	}
	else if ((strcmp(cadena1,cadena2) > 0))
	{
		cout << "La primer cadena es mayor alfabeticamente";
	}
	else
	{
		cout << "La segunda cadena es mayor alfabeticamente";
	}

	cin.get();
}