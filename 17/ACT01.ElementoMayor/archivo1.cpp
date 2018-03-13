#include <iostream>

//using namespace std;

class Empleado
{
private:
	char nombres[5][40];
	float sueldos[5];
public:
	void cargar();
	void mayorSueldo();
};

void Empleado::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		std::cout << "Ingrese el nombre: ";
		std::cin.getline(nombres[f], 40);
		std::cout << "Ingrese el sueldo: ";
		std::cin >> sueldos[f];
		std::cin.get();
	}
}

void Empleado::mayorSueldo()
{
	float mayor = sueldos[0];
	int pos = 0;
	for (int f = 1; f < 5; f++)
	{
		if (sueldos[f] > mayor)
		{
			mayor = sueldos[f];
			pos = f;
		}
	}
	std::cout << "El empleado con sueldo mayor es:\n";
	std::cout << nombres[pos];
	std::cout << "\n";
	std::cout << "Tiene un sueldo: ";
	std::cout << mayor;
	std::cin.get();
}

void main()
{
	Empleado emp1;
	emp1.cargar();
	emp1.mayorSueldo();
}