#include <iostream>

class OrdenamientoSueldos {
private:
	int sueldos[5];
public:
	void cargar();
	void ordenar();
	void imprimir();
};

void OrdenamientoSueldos::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		std::cout << "Ingrese el sueldo: ";
		std::cin >> sueldos[f];
	}
}

void OrdenamientoSueldos::ordenar()
{
	for (int k = 0; k < 4; k++)
	{
		for (int f = 0; f < 4 - k; f++)
		{
			if (sueldos[f] > sueldos[f + 1])
			{
				int aux;
				aux = sueldos[f];
				sueldos[f] = sueldos[f + 1];
				sueldos[f + 1] = aux;
			}
		}
	}
}

void OrdenamientoSueldos::imprimir()
{
	std::cout << "Sueldos ordenados de menor a mayor:\n";
	for (int f = 0; f < 5; f++)
	{
		std::cout << sueldos[f];
		std::cout << "\n";
	}
	std::cin.get();
	std::cin.get();
}

void main()
{
	OrdenamientoSueldos os;
	os.cargar();
	os.ordenar();
	os.imprimir();
}