#include <iostream>

int main()
{
	int n = 0;

	std::cout << "Enter the number (0-10): ";
	std::cin >> n;

	for (int i = 0; i <= 10; ++i)
	{
		std::cout << n << " * " << i << " = " << n * i << std::endl;
	}

	return 0;
}
