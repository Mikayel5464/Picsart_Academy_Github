#include <stdio.h>

int main()
{
	int i = 0, n = 0;

	printf("Enter the number of elements in array: ");
	scanf("%i", &n);

	int arr[n];

	for (i = 0; i < n; ++i)
	{
		printf("Enter the %i element in array: ", i + 1);
		scanf("%i", &arr[i]);
	}

	int target = 0;
	
	printf("Enter the array element whose index you want to know: ");
	scanf("%i", &target);

	for (i = 0; i < n; ++i)
	{
		if (target == arr[i])
			printf("The index of entered value is: %i \n", i);
	}
	
	return 0;
}

