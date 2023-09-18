#include <iostream>

int main()
{
	int arr[] = {-5, 16, 21, 11};
	int size = sizeof(arr) / sizeof(arr[0]);

	int min = arr[0];
	int max = arr[1];

	for (int i = 0; i < size; ++i)
	{
		if (min >= arr[i])
			min = arr[i];

		if (max <= arr[i])
			max = arr[i];
	}

	std::cout << "Max element = " << max << std::endl;
	std::cout << "Min element = " << min << std::endl;

	return 0;
}
