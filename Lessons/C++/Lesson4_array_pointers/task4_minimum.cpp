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

	int* min_ptr = &arr[0];

	for (int i = 0; i < size; ++i)
	{
		if (*min_ptr > *(ptr + i))
		{
			*min_ptr = *(ptr + i);
		}
	}

	std::cout << "Max value in array = " << *min_ptr << std::endl;

	return 0;
}
