#include <iostream>

int main()
{
	const int size = 10;
	int arr[size] = {20, 54, 61, 214, 3, -7, -32, 78, 88, 1};
	int* ptr = arr;
	int value = 0;

	std::cout << "Enter the value that you want to find in array: ";
	std::cin >> value;

	for (int i = 0; i < size; ++i)
	{
		if (value == *(ptr + i))
		{
			std::cout << "Index of value = " << i << std::endl;
			return 0;
		}
	}

	std::cout << "The value isn't in array!" << std::endl;

	return 0;
}
