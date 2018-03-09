#include<iostream>

using namespace std;

void main()
{
	int horasTrabajadas = 0;
	float costoHora = 0.0;
	float sueldo = 0.0;
	cout << "Ingrese las horas trabajadas por el operario: ";
	cin >> horasTrabajadas;
	cout << "Ingrese el pago por hora: ";
	cin >> costoHora;

	sueldo = horasTrabajadas * costoHora;

	cout << "El suledo total del operario es: ";
	cout << sueldo;

	cin.get();
	cin.get();
}