#include <stdio.h>

int main()
{
	int n1 = 0, n2 = 0;
	int index = 0, i = 0;

	printf("Enter the number of elements in first array: ");
	scanf("%i", &n1);
	int arr1[n1];

	for (i = 0; i < n1; ++i)
	{
		printf("Enter the %i element of first array: ", i + 1);
		scanf("%i", &arr1[i]);
	}

	printf("Enter the number of elements in second array: ");
        scanf("%i", &n2);
	int arr2[n2];

	for (i = 0; i < n2; ++i)
	{
		printf("Enter the %i element of second array: ", i + 1);
		scanf("%i", &arr2[i]);
        }

	int length1 = sizeof(arr1) / sizeof(int);
        int length2 = sizeof(arr2) / sizeof(int);
        int n3 = length1 + length2;
        int arr3[n3];

	for (i = 0; i < length1; ++i)
		arr3[index++] = arr1[i];

	for (i = 0; i < length2; ++i)
		arr3[index++] = arr2[i];

	printf("\n");
	printf("Result of concatenation: \n");

	for (i = 0; i < n3; ++i)
		printf("%i \n", arr3[i]);

	return 0;
}

