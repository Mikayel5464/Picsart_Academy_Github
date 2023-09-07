#include <iostream>

int main()
{
	char a = 0;
	char b = 0;

	std::cout << "Enter the letter symbol: ";
	std::cin >> a;
	
	if (a >= 65 && a <= 90)
	{
		b = a + 32;
		std::cout << b << std::endl;
	}
	else if (a >= 97 && a <= 122)
	{
		b = a - 32;
		std::cout << b << std::endl;
	}

	return 0;
}
