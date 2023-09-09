#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int min = 0;

	std::cout << "Enter the first number: ";
        std::cin >> a;
        std::cout << "Enter the second number: ";
        std::cin >> b;
	std::cout << "Enter the third number: ";
        std::cin >> c;

	if (a <= b)
	{
		min = a;
	}
	else
	{
		min = b;
	}

	if (c <= min)
	{
		std::cout << "The minimum of these three numbers is: " << c << std::endl;
	}
	else
	{
		std::cout << "The minimum of these three numbers is: " << min << std::endl;
	}

	return 0;
}
