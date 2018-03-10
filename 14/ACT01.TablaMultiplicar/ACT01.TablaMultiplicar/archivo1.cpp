#include <iostream>

using namespace std;

class TablaMultiplicar {
private:
	void calcular(int v);
public:
	void cargarValor();
};

void TablaMultiplicar::calcular(int v)
{
	for (int f = v; f <= (v*10); f += v)
	{
		cout << f;
		cout << "-";
	}
	cout << "\n";
}

void TablaMultiplicar::cargarValor()
{
	int valor = 0;
	do
	{
		cout << "Ingrese un valor: ";
		cin >> valor;
		if (valor != -1)
		{
			calcular(valor);
		}
	}while(valor != -1);
}

void main()
{
	TablaMultiplicar tabla1;
	tabla1.cargarValor();
}