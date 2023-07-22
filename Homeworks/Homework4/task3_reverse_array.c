#include <stdio.h>

int main()
{
	int i = 0, n = 0;

	printf("Enter the number of elements in array: ");
	scanf("%i", &n);

	char arr[n];

	while (i < n)
	{
		printf("Enter the %i element of array: ", i + 1);
		scanf(" %c", &arr[i]);
		++i;
	}

	for (i = n; i >= 0; --i)
		printf("%c \n", arr[i]);

	return 0;
}

