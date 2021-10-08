#include "main.h"
/**
 * print_char - prints single character
 * @al: arg list
 * Return: number of chars printed.
 */

int print_char(va_list al)
{
	char c = va_arg(al, int);

	if (c == '\0')
		return (write(1, &c, 1));

	_putchar(c);
	return (1);
}

/**
 * print_str - prints a string
 * @al: arg list
 * Return: number of chars printed
 */

int print_str(va_list al)
{
	char *arg = va_arg(al, char *);
	int sum = 0;

	if (!arg)
	{
		sum += _puts("(null)", 0);
		return (sum);
	}
	return (_puts(arg, 0));
}
