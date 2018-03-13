#include <iostream>

class OrdenamientoPaises {
private:
	char paises[5][40];
public:
	void cargar();
	void ordenar();
	void imprimir();
};

void OrdenamientoPaises::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		std::cout << "Ingrese el nombre del pais: ";
		std::cin.getline(paises[f], 40);
	}
}

void OrdenamientoPaises::ordenar()
{
	for (int k = 0; k < 4; k++)
	{
		for (int f = 0; f < 4 - k; f++)
		{
			if (strcmp(paises[f], paises[f + 1]) > 0)
			{
				char aux[40];
				strcpy_s(aux, 40, paises[f]);
				strcpy_s(paises[f], 40, paises[f +1]);
				strcpy_s(paises[f + 1], 40, aux);
			}
		}
	}
}

void OrdenamientoPaises::imprimir()
{
	std::cout << "Paises ordenados en forma alfabetica:\n";
	for (int f = 0; f < 5; f++)
	{
		std::cout << paises[f];
		std::cout << "\n";
	}
	std::cin.get();
}

void main()
{
	OrdenamientoPaises op;
	op.cargar();
	op.ordenar();
	op.imprimir();
}