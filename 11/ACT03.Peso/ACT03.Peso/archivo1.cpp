#include<iostream>

using namespace std;

void main()
{
	int cant1 = 0;
	int cant2 = 0;
	int cant3 = 0;
	int suma = 0;
	float peso = 0;

	do
	{
		cout << "Ingrese el peso: ";
		cin >> peso;

		if (peso > 10.2)
		{
			cant1++;
		}
		else if (peso >= 9.2)
		{
			cant2++;
		}
		else if (peso > 0)
		{
			cant3++;
		}
	}while(peso != 0);

	suma = cant1 + cant2 + cant3;
	
	cout << "Mayores a 10.2 Kg: ";
	cout << cant1;
	cout << "\n";
	cout << "Entre a 9.2 Kg y 10.2 Kg: ";
	cout << cant2;
	cout << "\n";
	cout << "menores a 9.2 Kg: ";
	cout << cant3;

	cin.get();
	cin.get();
}