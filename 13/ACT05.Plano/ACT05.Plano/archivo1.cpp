#include <iostream>

using namespace std;

class Punto
{
private:
	int x;
	int y;
public:
	void inicializar();
	void imprimirCuadrante();
};

void Punto::inicializar()
{
	cout << "Ingrese coordenada x: ";
	cin >> x;
	cout << "Ingrese coordenada y: ";
	cin >> y;
}

void Punto::imprimirCuadrante()
{
	if (x > 0 && y > 0)
	{
		cout << "Se encuentra en el primer cuadrante";
	}
	else
	{
		if (x < 0 && y > 0)
		{
			cout << "Se encuentra en el segundo cuadrante";
		}
		else
		{
			if (x < 0 && y < 0)
			{
				cout << "Se encuentra en el tercer cuadrante";
			}
			else
			{
				if (x > 0 && y < 0)
				{
					cout << "Se encuentra en el cuarto cuadrante";
				}
				else
				{
					cout << "El punto no esta en un cuadrante";
				}
			}
		}
	}

	cin.get();
	cin.get();	
}


void main()
{
	Punto punto1;
	punto1.inicializar();
	punto1.imprimirCuadrante();
}