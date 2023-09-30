#include <iostream>

/*
 * Cragiry tpum e matrici glxavor ankyunagcic verev gtnvox tarreri gumary
*/

int main()
{
	int n = 0;

	std::cout << "Number of rows and columns: ";
	std::cin >> n;

	int** ptr = static_cast<int**>(malloc(n * sizeof(int*)));

	for (int i = 0; i < n; ++i)
	{
		ptr[i] = static_cast<int*>(malloc(n * sizeof(int)));
	}

	for (int i = 0; i < n; ++i)
        {
                for (int j = 0; j < n; ++j)
                {
                        std::cin >> ptr[i][j];
                }
        }

	int sum = 0;

	for (int i = 0; i < n; ++i)
        {
                for (int j = 0; j < n; ++j)
                {
                        if (i < j)
			{
				sum += ptr[i][j];
			}
                }
        }

	std::cout << "sum = " << sum << std::endl;

	for (int i = 0; i < n; ++i)
	{
		std::free(ptr[i]);
	}

	std::free(ptr);

	return 0;
}
