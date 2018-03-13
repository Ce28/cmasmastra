#include <iostream>

using namespace std;

class Persona
{
private:
	char nombres[5][40];
	int edades[5];
public:
	void cargar();
	void mayoresEdad();
};

void Persona::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese nombre: ";
		cin.getline(nombres[f], 40);
		cout << "Ingrese edad: ";
		cin >> edades[f];
		cin.get();
	}
}

void Persona::mayoresEdad()
{
	cout << "Personas mayores de edad:\n";
	for (int f = 0; f < 5; f++)
	{
		if (edades[f] >= 18)
		{
			cout << nombres[f];
			cout << "\n";
		}
	}
	cin.get();
}


void main()
{
	Persona per1;
	per1.cargar();
	per1.mayoresEdad();
}