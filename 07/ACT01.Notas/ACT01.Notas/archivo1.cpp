#include<iostream>

using namespace std;

void main()
{
	int nota1 = 0;
	int nota2 = 0;
	int nota3 = 0;
	int promedio = 0;

	cout << "Ingrese primer nota: ";
	cin >> nota1;
	cout << "Ingrese segunda nota: ";
	cin >> nota2;
	cout << "Ingrese tercer nota: ";
	cin >> nota3;

	promedio = (nota1 + nota2 + nota3) / 3;

	if (promedio >= 7)
	{
		cout << "Promocionado";
	}
	else
	{
		if (promedio >= 4)
		{
			cout << "Regular";
		}
		else
		{
			cout << "Reprobado";
		}
	}

	cin.get();
	cin.get();
}