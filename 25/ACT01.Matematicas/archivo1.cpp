#include <iostream>

class Matematica {
public:
	int mayor(int x1, int x2);
	int mayor(int x1, int x2, int x3);
	float mayor(float x1, float x2);
	float mayor(float x1, float x2, float x3);
};

int Matematica::mayor(int x1, int x2)
{
	if (x1 > x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

int Matematica::mayor(int x1, int x2, int x3)
{
	if (x1 > x2 && x1 > x3)
	{
		return x1;
	}
	else
	{
		if (x2 > x3)
		{
			return x2;
		}
		else
		{
			return x3;
		}
	}
}

float Matematica::mayor(float x1, float x2)
{
	if (x1 > x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

float Matematica::mayor(float x1, float x2, float x3)
{
	if (x1 > x2 && x1 > x3)
	{
		return x1;
	}
	else
	{
		if (x2 > x3)
		{
			return x2;
		}
		else
		{
			return x3;
		}
	}
}

void main()
{
	Matematica m1;
	std::cout << "Mayor entre 6 y 8: ";
	std::cout << m1.mayor(6, 8) << std::endl;
	std::cout << "Mayor entre 10, 40 y 5: ";
	std::cout << m1.mayor(10, 40, 5) << std::endl;	
	std::cout << "Mayor entre 6.2 y 9.3: ";
	std::cout << m1.mayor(6.2f, 9.3f) << std::endl;	
	std::cout << "Mayor entre 7, 12.5 y 4.2: ";
	std::cout << m1.mayor(7.0f, 12.5f, 4.2f) << std::endl;
	std::cin.get();
}