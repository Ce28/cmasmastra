#include <iostream>

class Operarios {
private:
	float sueldos[5];
public:
	Operarios();
	void imprimir();
};

Operarios::Operarios()
{
	std::cout << "Carga de sueldos." << std::endl;
	for (int f = 0; f < 5; f++)
	{
		std::cout << "Ingrese el sueldo: ";
		std::cin >> sueldos[f];
	}
}

void Operarios::imprimir()
{
	for (int f = 0; f < 5; f++)
	{
		std::cout << sueldos[f] << std::endl;
	}

	std::cin.get();
	std::cin.get();
}

void main()
{
	Operarios op;
	op.imprimir();
}