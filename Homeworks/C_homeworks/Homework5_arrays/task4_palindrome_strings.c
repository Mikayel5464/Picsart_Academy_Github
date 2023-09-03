#include <stdio.h>

int main()
{
	int n = 0;
	int x = 0;

	printf("Enter the number of symbols of string: ");
	scanf("%i", &n);

	char str[n];

	for (int i = 0; i < n + 1; ++i)
	{
		scanf("%c", &str[i]);
	}

	int length = sizeof(str) / sizeof(char);

	for (int i = 0; i < length; ++i)
	{
		if (str[i] == str[length - i - 1])
		{
			++x;
			break;
		}
	}

	if (x != 0)
	{
		printf("The string is palidrome! \n");
	}
	else
	{
		printf("The string is not palidrome! \n");
	}

	return 0;
}
