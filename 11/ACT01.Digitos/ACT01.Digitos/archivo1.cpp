#include<iostream>

using namespace std;

void main()
{
	int valor = 0;

	do
	{
		cout << "Ingrese un valor: ";
		cin >> valor;
		
		if (valor >= 100)
		{
			cout << "Tiene 3 digitos";
		}
		else if (valor >= 10)
		{
			cout << "Tiene 2 digitos";
		}
		else
		{
			cout << "Tiene 1 digito";
		}
		cout << "\n";
	}while(valor != 0);
}