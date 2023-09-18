#include <iostream>

int main()
{
	char str[15];

	std::cout << "Enter the string: ";
	std::cin >> str;

	int size = sizeof(str) / sizeof(str[0]);

	for (int i = 0; i < size'; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}

	std::cout << str << std::endl;

	return 0;
}
