#include "main.h"
/**
 * _itoa - Converts an integer value string using the specified base
 * @i: Value to be converted to a string
 * @strout: Array in memory where to store the resulting null-terminated string
 * @base: Numerical base used to represent the value as a string.
 * Return: - the convexted text
*/
char  *_itoa(int i, char *strout, int base)
{
	char *str = strout;
	int digit, sign = 0;

	if (i < 0)
	{
		sign = 1;
		i *= -1;
	}

	while (i)
	{
		digit = i % base;
		*str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
		i = i / base;
		str++;
	}
	if (sign)
	{
		*str++ = '-';
	}
	*str = '\0';
	_strrev(strout);
	return (strout);
}
