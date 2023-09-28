#include <iostream>

int main()
{
	const int size = 5;
	int arr[size];
	int* ptr = arr;

	std::cout << "Enter the elements of array: " << std::endl;

	for (int i = 0; i < size; ++i)
	{
		std::cin >> *(ptr + i);
	}

	int sum = 0;
	int avg = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += *(ptr + i);
	}

	std::cout << "The average of elements of array = " << sum / size << std::endl;

	return 0;
}
