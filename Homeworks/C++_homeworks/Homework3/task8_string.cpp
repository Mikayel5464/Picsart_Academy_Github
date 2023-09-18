#include <iostream>

int main()
{
	char str[20];
	
	std::cout << "Enter the string: ";
	std::cin >> str;

	int size = sizeof(str) / sizeof(str[0]);
	int count = 0;

	for (int i = 0; i < size; ++i)
	{
		if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
		{
			++count;
		}
	}

	std::cout << "The number of vowel letters is: " << count << std::endl;

	return 0;
}
