#include <stdio.h>

int main()
{
	int a = 0;

	do
	{
		printf("Enter the year: ");
		scanf("%d", &a);
	}
	while (a < 0);

	if (a % 4 != 0)
		printf("This year is ordinary \n");
	else if (a % 100 == 0 && a % 400 != 0)
		printf("This year is ordinary \n");
	else
		printf("This year is leap-year! \n");

	return 0;
}

