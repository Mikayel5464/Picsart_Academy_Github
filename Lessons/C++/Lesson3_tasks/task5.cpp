#include <iostream>

int main()
{
	char arr[] = "Hello World";
	int count = 0;

	for (int i = 0; arr[i] != '\0'; ++i)
	{
		++count;
	}

	std::cout << "Size of char array = " << count << std::endl;

	return 0;
}
