#include <iostream>

int main()
{
	int arr[] = {1, 2, 8, 10, 11, 15};
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; ++i)
	{
		if ((arr[i] & 1) == 0)
		{
			arr[i] = 0;
		}

		std::cout << arr[i] << std::endl;
	}

	return 0;
}
