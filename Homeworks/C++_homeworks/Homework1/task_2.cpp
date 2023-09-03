#include <iostream>

int main()
{
	double a = 0;
	double b = 0;

	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
        std::cin >> b;

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;

	return 0;
}
