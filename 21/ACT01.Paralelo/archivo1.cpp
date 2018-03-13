#include <iostream>

class SueldoEmpleados {
private:
	char empleados[4][40];
	int sueldos[4][3];
	int sueldosTot[4];
public:
	void cargar();
	void calcularSumaSueldos();
	void imprimirTotalPagado();
	void empleadoMayorSueldo();
};

void SueldoEmpleados::cargar()
{
	for (int f = 0; f < 4; f++)
	{
		std::cout << "Ingrese el nombre del empleado: ";
		std::cin.getline(empleados[f], 40);
		for (int c = 0; c < 3; c++)
		{
			std::cout << "Ingrse el sueldo: ";
			std::cin >> sueldos[f][c];
			std::cin.get();
		}
	}
}

void SueldoEmpleados::calcularSumaSueldos()
{
	for (int f = 0; f < 4; f++)
	{
		int suma = 0;
		for (int c = 0; c < 3; c++)
		{
			suma += sueldos[f][c];
		}
		sueldosTot[f] = suma;
	}
}

void SueldoEmpleados::imprimirTotalPagado()
{
	std::cout << "Total de sueldos pagados por empleado:" << std::endl;
	for (int f = 0; f < 4; f++)
	{
		std::cout << empleados[f] << " - " << sueldosTot[f] << std::endl;
	}
}

void SueldoEmpleados::empleadoMayorSueldo()
{
	int may = sueldosTot[0];
	char nom[40];
	strcpy_s(nom, 40, empleados[0]);
	for (int f = 0; f < 4; f++)
	{
		if (sueldosTot[f] > may)
		{
			may = sueldosTot[f];
			strcpy_s(nom, 40, empleados[f]);
		}
	}

	std::cout << "El empleado con mayor sueldo es " << nom << ", con un sueldo de: $" << may << std::endl;
	std::cin.get();
}

void main()
{
	SueldoEmpleados se;
	se.cargar();
	se.calcularSumaSueldos();
	se.imprimirTotalPagado();
	se.empleadoMayorSueldo();
}