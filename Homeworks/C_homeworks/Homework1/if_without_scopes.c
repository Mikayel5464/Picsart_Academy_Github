#include <stdio.h>

void instructions()
{
	printf("First instruction \n");
	printf("Second instruction \n");
	printf("Third instruction \n");
}

int main()
{
	int a = 0;

	if (a == 0)
		instructions();

	return 0;
}

