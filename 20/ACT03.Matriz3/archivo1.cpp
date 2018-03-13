#include <iostream>

class Matriz3 {
private:
	int mat[3][4];	//Fila, Columna
public:
	void cargar();
	void primerFila();
	void ultimaFila();
	void primerColumna();
};

void Matriz3::cargar()
{
	for (int f = 0; f < 3; f++)
	{
		for (int c = 0; c < 4; c++)
		{
			std::cout << "Ingrese componente: ";
			std::cin >> mat[f][c];
		}
	}
}
void Matriz3::primerFila()
{
	std::cout << "Primer fila de la matriz: " << std::endl;
	for (int c = 0; c < 4; c++)
	{
		std::cout << mat[0][c] << "\t";
	}
	std::cout << std::endl;
}

void Matriz3::ultimaFila()
{
	std::cout << "Ultima fila de la matriz: " << std::endl;
	for (int c = 0; c < 4; c++)
	{
		std::cout << mat[2][c] << "\t";
	}
	std::cout << std::endl;
}

void Matriz3::primerColumna()
{
	std::cout << "Primer columna de la matriz: " << std::endl;
	for (int f = 0; f < 3; f++)
	{
		std::cout << mat[f][0] << std::endl;
	}
	std::cout << std::endl;
}

void main()
{
	Matriz3 m;
	m.cargar();
	m.primerFila();
	m.ultimaFila();
	m.primerColumna();
	std::cin.get();
	std::cin.get();
}