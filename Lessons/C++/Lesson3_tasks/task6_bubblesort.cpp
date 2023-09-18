#include <iostream>

/*

Bubble sort algorithm

*/

int main()
{
	const int size = 5;

	int arr[size] = {5, 1, 12, 65, 50};
	int temp = 0;

	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	for (int k = 0; k < size; ++k)
	{
		std::cout << arr[k] << std::endl;
	}

	return 0;
}
