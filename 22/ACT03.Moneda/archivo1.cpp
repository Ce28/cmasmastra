#include <iostream>

class Moneda {
private:
	int valor;
public:
	Moneda(int v);
	void imprimir();
};

Moneda::Moneda(int v)
{
	valor = v;
}

void Moneda::imprimir()
{
	std::cout << "El valor de la moneda: " << valor << std::endl;
}

void main()
{
	Moneda mon1(5);
	Moneda mon2(50);
	Moneda mon3 = 100;

	mon1.imprimir();
	mon2.imprimir();
	mon3.imprimir();

	std::cin.get();
}