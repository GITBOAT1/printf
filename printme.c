#include "main.h"
/**
 * print - print to screen;
 * @a: the string to print;
*/

void print(char *a)
{
        int i, j;

	i = 0;
	j = 0;

	while(a[j] != '\0')
		j = j + 1;
	printf( "size in printme %d\n", j);
	for (i = 0; i < j; i++)
	{
		_putchar(a[i]);
	}
}
