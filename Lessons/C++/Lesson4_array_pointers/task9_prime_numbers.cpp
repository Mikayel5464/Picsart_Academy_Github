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

	std::cout << "Prime numbers: ";

	for (int i = 0; i < size; ++i)
        {
                for (int j = 2; j < *(ptr + i) / 2; ++j)
		{
			if (*(ptr + i) % j != 0)
			{
				std::cout << *(ptr + i) << std::endl;
			}
		}
        }

	return 0;
}
