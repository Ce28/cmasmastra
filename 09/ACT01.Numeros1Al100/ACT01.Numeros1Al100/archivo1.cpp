#include<iostream>

using namespace std;

void main()
{
	int x = 1;
	
	while (x <= 100)
	{
		cout << x;
		cout << " - ";
		x = x + 1;
	}

	cin.get();
}