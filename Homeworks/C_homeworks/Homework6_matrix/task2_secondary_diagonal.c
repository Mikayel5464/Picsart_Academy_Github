#include <stdio.h>

int sum_secondary_diagonal(int n)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int matrix[n][n];

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			scanf("%i", &matrix[i][j]);
		}
	}

	for (i = 0; i < n; ++i)
        {
                for (j = 0; j < n; ++j)
                {
                        if (i + j == n - 1)
			{
				sum += matrix[i][j];
			}
                }
        }

	return sum;
}

int main()
{
	int a = 0;

	printf("Enter the number of rows and columns of matrix: ");
	scanf("%i", &a);

	printf("The sum of elements of main diagonal = %i \n", sum_secondary_diagonal(a));

	return 0;
}
