#include<iostream>

using namespace std;

void main()
{
	int n = 0;
	int x = 0;

	cout << "Ingrese el valor final: ";
	cin >> n;

	x = 1;
	while (x <= n)
	{
		cout << x;
		cout << " - ";
		x = x + 1;
	}

	cin.get();
	cin.get();
}