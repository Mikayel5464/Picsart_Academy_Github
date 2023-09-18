#include <iostream>

int main()
{
	const int m = 3;
	const int n = 2;
	int matrix[m][n];
	int max = 0;

	std::cout << "Enter the elements of matrix: " << std::endl;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}

	max = matrix[0][0];

	for (int i = 0; i < m; ++i)
        {
                for (int j = 0; j < n; ++j)
                {
                        if (max <= matrix[i][j])
			{
				max = matrix[i][j];
			}
                }
        }

	std::cout << "max = " << max << std::endl;

	return 0;
}
