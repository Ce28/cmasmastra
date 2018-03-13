#include <iostream>

class NotaAlumnos {
private:
	char nombres[5][40];
	int notas[5];
public:
	void cargar();
	void ordenar();
	void imprimir();
};

void NotaAlumnos::cargar()
{
	std::cout << "Carga de nombre y notas" << std::endl;
	for (int f = 0; f < 5; f++)
	{
		std::cout << "Ingrese el nombre sel alumno: ";
		std::cin.getline(nombres[f], 40);
		std::cout << "Ingrese la nota del alumno: ";
		std::cin >> notas[f];
		std::cin.get();
	}
}

void NotaAlumnos::ordenar()
{
	for (int k = 0; k < 5; k++)
	{
		for  (int f = 0; f < 4 - k; f++)
		{
			if (notas[f] < notas[f + 1])
			{
				int auxnota;
				auxnota = notas[f];
				notas[f] = notas[f + 1];
				notas[f + 1] = auxnota;

				char auxnombre[40];
				strcpy_s(auxnombre, 40, nombres[f]);
				strcpy_s(nombres[f], 40, nombres[f + 1]);
				strcpy_s(nombres[f + 1], 40, auxnombre);
			}
		}
	}
}

void NotaAlumnos::imprimir()
{
	std::cout << "Nombre de alumnos y notas de mayor a menor" << std::endl;
	for (int f = 0; f < 5; f++)
	{
		std::cout << nombres[f] << " - " << notas[f] << std::endl;
	}
	std::cin.get();
}

void main()
{
	NotaAlumnos na;
	na.cargar();
	na.ordenar();
	na.imprimir();
}