#include <stdio.h>

int main()
{
	int num = 0, i = 0, x = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	if (num == 0 || num == 1)
		++x;
	
	for (i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			++x;
			break;
		}
	}

	if (x == 0)
		printf("The number is a prime! \n");
	else
		printf("The number is not a prime! \n");

	return 0;
}

