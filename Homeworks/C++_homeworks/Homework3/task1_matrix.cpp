#include <iostream>

int main()
{
	const int m = 3;
	int matrix[m][m];

	std::cout << "Enter the elements of matrix: " << std::endl;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}

	std::cout << "Elements on main diagonal of matrix: " << std::endl;

	for (int i = 0; i < m; ++i)
        {
                for (int j = 0; j < m; ++j)
                {
                        if (i == j)
			{
				std::cout << matrix[i][j] << std::endl;
			}
                }
        }

	return 0;
}
