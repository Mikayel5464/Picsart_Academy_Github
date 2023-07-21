#include <stdio.h>

int main()
{
	int i = 0, n = 0;

	printf("Enter the number of elements in array: ");
	scanf("%i", &n);

	int numbers[n];

	while (i < n)
	{
		printf("Enter the %i element of array: ", i + 1);
		scanf("%i", &numbers[i]);
		++i;
	}

	for (i = 0; i < n; i++)
		printf("%i \n", numbers[i]);

	return 0;
}

