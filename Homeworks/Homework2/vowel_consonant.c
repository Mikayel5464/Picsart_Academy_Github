#include <stdio.h>

int main()
{
	char sym = 'a';

	do
	{
		printf("Enter the letter: ");
		scanf(" %c", &sym);
	}
	while (sym < 65 || sym > 122);

	if (sym == 'a' || sym == 'e' || sym == 'i' || sym == 'o' || sym == 'u')
		printf("The letter is vowel \n");
        else if (sym == 'A' || sym == 'E' || sym == 'I' || sym == 'O' || sym == 'U')
                printf("The letter is vowel \n");
        else
                printf("The letter is consonant \n");

	return 0;
}

