#include <iostream>

int main()
{
	const int m = 3;
	int matrix[m][m];
	int sum = 0;

	std::cout << "Enter the elements of matrix: " << std::endl;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < m; ++i)
        {
                for (int j = 0; j < m; ++j)
                {
                        if ((i == j) || (i + j == m - 1))
			{
				sum += matrix[i][j];
			}
                }
        }

	std::cout << "The sum of elements of main and secondary diagonals: " << sum << std::endl;

	return 0;
}
