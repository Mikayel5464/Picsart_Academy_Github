#include <iostream>

int main()
{
	const int size = 5;
	int arr[size] = {1, 2, 3, 4, 5};
	int* ptr = arr;
	int temp = 0;

	for (int i = 0; i < size / 2; ++i)
	{
		temp = *(ptr + i);
		*(ptr + i) = *(ptr + size - i - 1);
		*(ptr + size - i - 1) = temp;
	}

	for (int i = 0; i < size; ++i)
	{
		std::cout << *(ptr + i) << std::endl;
	}

	return 0;
}
