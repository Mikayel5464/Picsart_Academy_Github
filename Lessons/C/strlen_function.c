#include <stdio.h>

/*

size_t -> unsigned int cast arac

*/

size_t str_size(const char *x)
{
        int len = 0;

        while (*(x + len) != '\0')
        {
                ++len;
        }

        return len;
}

int main()
{
	char arr[] = "hello";
	char *ptr = arr;

	int length = str_size(ptr);
	printf("The length of line is: %i \n", length);

	return 0;
}

