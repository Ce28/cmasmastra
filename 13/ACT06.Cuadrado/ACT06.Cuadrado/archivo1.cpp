#include <iostream>

using namespace std;

class Cuadrado {
private:
	int lado;
public:
	void inicializar();
	void imprimirPerimetro();
	void imprimirSuperficie();
};

void Cuadrado::inicializar()
{
	cout << "Ingrese el lado del cuadrado: ";
	cin >> lado;
}

void Cuadrado::imprimirPerimetro()
{
	int perimetro = 0;
	perimetro = lado * 4;
	cout << "El perimetro es: ";
	cout << perimetro;
	cout << "\n";
}

void Cuadrado::imprimirSuperficie()
{
	int superficie = 0;
	superficie = lado * lado;
	cout << "La superficie es: ";
	cout << superficie;
}

void main()
{
	Cuadrado cuadrado1;
	cuadrado1.inicializar();
	cuadrado1.imprimirPerimetro();
	cuadrado1.imprimirSuperficie();

	cin.get();
	cin.get();
}