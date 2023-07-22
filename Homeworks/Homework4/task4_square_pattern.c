#include <stdio.h>

int main()
{
	int num = 0, i = 0, j = 0;

	printf("Enter the size for side of square: ");
	scanf("%i", &num);

	for (i = 1; i <= num; ++i)
	{
		for (j = 1; j <= num; ++j)
		{
			if (i == 1 || i == num || j == 1 || j == num)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}

	return 0;
}

