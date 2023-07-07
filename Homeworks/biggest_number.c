#include <stdio.h>

int main()
{
	double a = 0, b = 0;

	printf("Enter the first number: ");
	scanf("%lf", &a);
	printf("Enter the second number: ");
        scanf("%lf", &b);

	if (a > b)
		printf("The biggest number is: %.3lf \n", a);
	else
		printf("The biggest number is: %.3lf \n", b);

	return 0;
}

