#include <iostream>

int main()
{
	const int m = 4;
	const int n = 3;
	int matrix[m][n];
	int min = 0;
	int index1 = 0;
	int index2 = 0;

	std::cout << "Enter the elements of matrix: " << std::endl;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}

	min = matrix[0][0];

	for (int i = 0; i < m; ++i)
        {
                for (int j = 0; j < n; ++j)
                {
                        if (min >= matrix[i][j])
			{
				min = matrix[i][j];
				index1 = i;
				index2 = j;
			}
                }
        }

	std::cout << "Indexes of minimum element in matrix: " << std::endl;
	std::cout << index1 << " " << index2 << std::endl;

	return 0;
}
