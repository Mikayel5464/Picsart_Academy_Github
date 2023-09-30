#include <iostream>

/*
 * Matrici bolor zuyg tvery poxarinum enq 0-nerov
*/

int main()
{
	int n = 0;
	int m = 0;

	std::cout << "Number of rows: ";
	std::cin >> n;
	std::cout << "Number of columns: ";
	std::cin >> m;

	int **ptr = static_cast<int**>(malloc(n * sizeof(int*)));

	for (int i = 0; i < n; ++i)
	{
		ptr[i] = static_cast<int*>(malloc(m * sizeof(int)));
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> ptr[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (ptr[i][j] % 2 == 0)
			{
				ptr[i][j] = 0;
			}
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << ptr[i][j] << " ";
		}

		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		std::free(ptr[i]);
	}

	std::free(ptr);

	return 0;
}
