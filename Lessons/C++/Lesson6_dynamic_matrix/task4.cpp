#include <iostream>

/*
 * Cragiry tpum e glxavor ev ojandak ankyunagceri hatman ketic verev gtnvox sectori tarreri gumary
*/

int main()
{
	int n = 0;

	std::cout << "Number of rows and columns: ";
	std::cin >> n;

	int** matrix = static_cast<int**>(malloc(n * sizeof(int*)));

	for (int i = 0; i < n; ++i)
	{
		matrix[i] = static_cast<int*>(malloc(n * sizeof(int)));
	}

	for (int i = 0; i < n; ++i)
        {
                for (int j = 0; j < n; ++j)
                {
                        std::cin >> matrix[i][j];
                }
        }

	int sum = 0;

	for (int i = 0; i < n; ++i)
        {
                for (int j = 0; j < n; ++j)
                {
                        if (i < j && j < n - i - 1)
			{
				sum += matrix[i][j];
			}
                }
        }

	std::cout << "sum = " << sum << std::endl;

	for (int i = 0; i < n; ++i)
	{
		std::free(matrix[i]);
	}

	std::free(matrix);

	return 0;
}
