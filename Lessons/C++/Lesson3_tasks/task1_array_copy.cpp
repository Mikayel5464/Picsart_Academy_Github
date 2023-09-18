#include <iostream>

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {};
	int size = sizeof(arr1) / sizeof(arr1[0]);

	for (int i = 0; i < size; ++i)
	{
		arr2[i] = arr1[i];
	}

	std::cout << "Second array:" << std::endl;

	for (int i = 0; i < size; ++i)
	{
		std::cout << arr2[i] << std::endl;
	}

	return 0;
}
