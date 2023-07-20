#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, min = 0, i = 1, x = 0;
	
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
        scanf("%d", &b);
	printf("c = ");
        scanf("%d", &c);

	if (a > 0 && b > 0 && c > 0)
	{	
		if (a < b)
			min = a;
		else
			min = b;
		if (c < min)
			min = c;

		while (i <= min)
		{
			if (a % i == 0 && b % i == 0 && c % i == 0)
				x = i;
			++i;
		}

		printf("%d \n", x);
	}
	else
		printf("a <= 0 \n");
		
	return 0;
}

