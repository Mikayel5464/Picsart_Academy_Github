#include <iostream>

/*
 * Amen toxi mecaguyn tarry gcum enq nor zangvaci mej
*/

int main()
{
	int n = 0;
	int m = 0;

	std::cout << "Number of rows: ";
	std::cin >> n;
	std::cout << "Number of columns: ";
	std::cin >> m;

	int** ptr = static_cast<int**>(malloc(n * sizeof(int*)));

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

	int* max_ptr = static_cast<int*>(malloc(n * sizeof(int)));

	for (int i = 0; i < n; ++i)
	{
		max_ptr[i] = ptr[i][0];
	}

	for (int i = 0; i < n; ++i)
        {
                for (int j = 0; j < m; ++j)
                {
                       if (max_ptr[i] < ptr[i][j])
		       {
			       max_ptr[i] = ptr[i][j];
		       }
                }
        }

	for (int i = 0; i < n; ++i)
	{
		std::cout << max_ptr[i] << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		std::free(ptr[i]);
	}

	std::free(ptr);
	std::free(max_ptr);

	return 0;
}
