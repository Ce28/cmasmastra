#include <iostream>

class Matriz1 {
private:
	int mat[3][5];//Renlon , columna
public:
	void cargar();
	void imprimir();
};

void Matriz1::cargar()
{
	for (int f = 0; f < 3; f++)
	{
		for (int c = 0; c < 5; c++)
		{
			std::cout << "Ingrese componente: ";
			std::cin >> mat[f][c];
		}
	}
}

void Matriz1::imprimir()
{
	for (int f = 0; f < 3; f++)
	{
		for (int c = 0; c < 5; c++)
		{
			std::cout << mat[f][c] << "\t";
		}
		std::cout << std::endl;
	}
	std::cin.get();
	std::cin.get();
}

void main()
{
	Matriz1 m;
	m.cargar();
	m.imprimir();
}