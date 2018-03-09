#include<iostream>

using namespace std;

void main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "Ingrese primer valor: ";
	cin >> num1;
	cout << "Ingrese segundo valor: ";
	cin >> num2;
	cout << "Ingrese tercer valor: ";
	cin >> num3;

	if (num1 > num2 && num1 > num3)
	{
		cout << num1;
	}
	else 
	{
		if (num2 > num3)
		{
			cout << num2;
		}
		else 
		{
			cout << num3;
		}
	}

	cin.get();
	cin.get();
}