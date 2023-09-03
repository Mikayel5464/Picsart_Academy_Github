#include <stdio.h>

int main()
{
	int arr[] = {2, 2, 9, 3, 3, 4, 5, 4, 5};
	int length = sizeof(arr) / sizeof(int);
	int i = 0, j = 0;

	for (i = 0; i < length; ++i)
	{
		int s = 0;

		for (j = 0; j < length; ++j)
		{
			if (i == j)
				continue;

			if (arr[i] == arr[j] && i != j)
				++s;
		}

		if (s == 0)
                	printf("%i \n", arr[i]);
	}

	return 0;
}
