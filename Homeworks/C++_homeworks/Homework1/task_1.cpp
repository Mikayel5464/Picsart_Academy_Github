#include <iostream>

int main()
{
	std::cout << "char = " << sizeof(char) << " byte" << std::endl;
	std::cout << "short int = "  <<sizeof(short int) << " byte" << std::endl;
	std::cout << "int = " << sizeof(int) << " byte" << std::endl;
	std::cout << "long int = " << sizeof(long int) << " byte" << std::endl;
	std::cout << "long long int = " << sizeof(long long int) << " byte" << std::endl;
	std::cout << "float = " << sizeof(float) << " byte" << std::endl;
	std::cout << "double = " << sizeof(double) << " byte" << std::endl;
	std::cout << "long double = " << sizeof(long double) << " byte" << std::endl;

	return 0;
}
