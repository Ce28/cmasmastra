#include<iostream>

using namespace std;

void main()
{
	int num1 = 0;
	int num2 = 0;

	cout << "Ingrese primer valor: ";
	cin >> num1;
	cout << "Ingrese segundo valor: ";
	cin >> num2;

	if (num1 > num2)
	{
		cout << num1;
	}
	else
	{
		cout << num2;
	}

	cin.get();
	cin.get();
}