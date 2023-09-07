#include <stdio.h>

int main()
{
        const int n = 3;
        int i = 0, j = 0, sum = 0;
	int matrix[n][n];
	
	printf("Enter the elements of 3x3 matrix: \n");

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
                        if (i <= j)
                        {
                                sum += matrix[i][j];
                        }
                }
        }

        printf("sum = %i \n", sum);

        return 0;
}
