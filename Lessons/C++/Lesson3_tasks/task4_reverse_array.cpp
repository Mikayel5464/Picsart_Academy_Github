#include <iostream>

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	int temp = 0;

	for (int i = 0; i < size / 2; ++i)
	{
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}

	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << std::endl;
	}

	return 0;
}
