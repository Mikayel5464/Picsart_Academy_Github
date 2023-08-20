#include <stdio.h>

int main()
{
	int n = 0, max = 0;

	printf("Enter the number of elements in array: ");
	scanf("%i", &n);

	int arr[n];
	
	for (int i = 0; i < n; ++i)
	{
		printf("Enter the %i element in array: ", i + 1);
		scanf("%i", &arr[i]);
	}

	max = arr[0];

	for (int i = 0; i < n; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	int second_max = 0;

	for (int j = 0; j < n; ++j)
	{
		if (arr[j] < max)
		{
			second_max = arr[j];
		}
	}

	printf("%i \n", second_max);

	return 0;
}

