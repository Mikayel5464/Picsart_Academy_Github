#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;

	std::cout << "Enter the first number: ";
        std::cin >> a;
        std::cout << "Enter the second number: ";
        std::cin >> b;
	std::cout << "Enter the third number: ";
        std::cin >> c;

	if (a <= b)
	{
		max = b;
	}
	else
	{
		max = a;
	}

	if (c <= max)
	{
		std::cout << "The maximum of these three numbers is: " << max << std::endl;
	}
	else
	{
		std::cout << "The maximum of these three numbers is: " << c << std::endl;
	}

	return 0;
}
