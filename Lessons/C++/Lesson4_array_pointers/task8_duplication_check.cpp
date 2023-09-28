#include <iostream>

int main()
{
	const int size = 8;
	int arr[size] = {1, 3, 1, 9, 5, 10, 32, 2};
	int* ptr = arr;
	bool exists = false;

	// ciklerum logikan aynpes e kazmakerpac vor nuyn tvi vrayov miarjamanak erku ciklnery chpttven

	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (*(ptr + i) == *(ptr + j))
			{
				exists = true;
			}
		}
	}

	if (exists)
	{
		std::cout << "In array exists duplicates!" << std::endl;
	}
	else
	{
		std::cout << "In array duplicates doesn't exists!" << std::endl;
	}

	return 0;
}
