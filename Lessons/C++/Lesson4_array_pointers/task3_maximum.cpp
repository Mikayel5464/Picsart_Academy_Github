#include <iostream>

int main()
{
	const int size = 7;
	int arr[size];
	int* ptr = arr;

	std::cout << "Enter the elements of array: " << std::endl;

	for (int i = 0; i < size; ++i)
	{
		std::cin >> *(ptr + i);
	}

	int* max_ptr = &arr[0];

	for (int i = 0; i < size; ++i)
	{
		if (*max_ptr < *(ptr + i))
		{
			*max_ptr = *(ptr + i);
		}
	}

	std::cout << "Max value in array = " << *max_ptr << std::endl;

	return 0;
}
