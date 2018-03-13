#include <iostream>

class EstructuraVector {
	int vec[5];
public:
	EstructuraVector();
	EstructuraVector(int valor);
	void imprimir();
};

EstructuraVector::EstructuraVector()
{
	for (int f = 0; f < 5; f++)
	{
		vec[f] = 0;
	}		
}

EstructuraVector::EstructuraVector(int valor)
{
	for (int f = 0; f < 5; f++)
	{
		vec[f] = valor;
	}
}

void EstructuraVector::imprimir()
{
	for (int f = 0; f < 5; f++)
	{
		std::cout << vec[f] << " - ";
	}
	std::cout << "\n\n";
}

void main()
{
	EstructuraVector v1;
	v1.imprimir();
	EstructuraVector v2(12);
	v2.imprimir();
	std::cin.get();
}