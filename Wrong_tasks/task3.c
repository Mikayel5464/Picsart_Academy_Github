#include <stdio.h>

int sum_in_matrix(int (*matrix)[], int n)
{
        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
                for (int j = 0; j < n; ++j)
                {
                        if (i == j)
                        {
                                sum += *(*matrix + i) + j;  //sum += matrix[i][j];
                        }
                }
        }

        return sum;
}

int main()
{
        int mat[3][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}};

        int sum_in_mat = sum_in_matrix(mat, 3);

        printf("The sum = %i \n", sum_in_mat);

        return 0;
}

