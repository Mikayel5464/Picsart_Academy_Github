#include <iostream>

int main()
{
	double a{};
	double b{};
	double c{};
	double d{};

	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;

	d = (a + b + c) / 3;
	std::cout << d << std::endl;

	return 0;
}
