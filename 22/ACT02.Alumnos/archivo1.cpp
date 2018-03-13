#include <iostream>

class Alumno {
private:
	char nombre[40];
	int edad;
public:
	Alumno();
	void imprimir();
	void esMayorEdad();
};

Alumno::Alumno()
{
	std::cout << "Ingrese nombre: ";
	std::cin.getline(nombre, 40);
	std::cout << "Ingrese edad: ";
	std::cin >> edad;
}

void Alumno::imprimir()
{
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Edad: " << edad << std::endl;
}

void Alumno::esMayorEdad()
{
	if (edad >= 18)
	{
		std::cout << "Es mayor de edad.";
	}
	else
	{
		std::cout << "Es menor de edad.";
	}

	std::cin.get();
	std::cin.get();
}

void main()
{
	Alumno al;
	al.imprimir();
	al.esMayorEdad();
}