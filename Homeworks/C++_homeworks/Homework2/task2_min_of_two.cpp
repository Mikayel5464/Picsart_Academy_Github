#include <iostream>

int main()
{
	int a = 0;
	int b = 0;

	std::cout << "Enter the first number: ";
	std::cin >> a;
	std::cout << "Enter the second number: ";
        std::cin >> b;

	if (a < b)
        {
                std::cout << "The minimum of these two numbers is: " << a << std::endl;
        }
	else if (a == b)
	{
		std::cout << "These number are equal each other!" << std::endl;
	}
        else
        {
                std::cout << "The minimum of these two numbers is: " << b << std::endl;
        }

        return 0;
}
