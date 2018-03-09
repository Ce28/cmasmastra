#include<iostream>

using namespace std;

void main()
{
	int nota = 0;
	int aprobados = 0;
	int reprobados = 0;
	
	for (int f = 1; f <= 10; f++)
	{
		cout << "Ingrese la nota del alumno: ";
		cin >> nota;

		if (nota >= 7)
		{
			aprobados++;
		}
		else
		{
			reprobados++;
		}
	}

	cout << "La cantidad de aprobados es: ";
	cout << aprobados;
	cout << "\n";
	cout << "La cantidad de reprobados es: ";
	cout << reprobados;

	cin.get();
	cin.get();
}