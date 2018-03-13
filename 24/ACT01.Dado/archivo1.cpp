#include <iostream>
#include <cstdlib>
#include <ctime>


class Dado {
private:
	int valor;
	void separador();
public:
	void tirar();
	void imprimir();
};

void Dado::separador()
{
	std::cout << "*************************" << std::endl;
}

void Dado::tirar()
{
	srand (time(NULL));
	valor = rand() % 6 + 1;
}

void Dado::imprimir()
{
	separador();
	std::cout << valor << std::endl;
	separador();
}

void main()
{
	Dado d;
	d.tirar();
	d.imprimir();
	std::cin.get();
}