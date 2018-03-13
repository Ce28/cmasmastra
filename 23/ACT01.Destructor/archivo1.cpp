#include <iostream>

class Tabla {
private:
	int valor;
public:
	Tabla();
	void imprimir();
	~Tabla();
};

Tabla::Tabla()
{
	std::cout << "Ingrese un valor: ";
	std::cin >> valor;
}

void Tabla::imprimir()
{
	for (int f = valor; f <= valor * 10; f += valor)
	{
		std::cout << f << std::endl;
	}
}

Tabla::~Tabla()
{
	std::cout << "Gracias por utilizar este programa";
	std::cin.get();
	std::cin.get();
}

void main()
{
	Tabla tabla1;
	tabla1.imprimir();
}