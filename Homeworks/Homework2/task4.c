#include <stdio.h>

int main()
{
	char sym = 'A';

	do
	{
		printf("Enter the uppercase symbol: ");
		scanf(" %c", &sym);
	}
	while (sym >= 97 && sym <= 122);

	printf("%c \n", sym + 32);

	return 0;
}

