#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, max = 0;

	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
        scanf("%d", &b);
	printf("Enter the third number: ");
        scanf("%d", &c);

	if (a == b || a == c || b == c)
	{
		if (a > b)
			max = a;
		else
			max = b;

		if (max > c)
			printf("%d \n", max);
		else
			printf("%d \n", c);
	}

	return 0;
}

