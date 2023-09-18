#include <iostream>

int main()
{
	double a{}; // initialization a = 0
	double b{}; // b = 0
	double c{}; // c = 0

	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
        std::cin >> b;

	c = a + b;

	std::cout << "a + b = " << c << std::endl;

	return 0;        
}
