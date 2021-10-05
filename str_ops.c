#include "main.h"

/**
 * _putchar - writes charcters of c to stdout
 * @c: the character to print
 * Return: number of printed chars
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _puts - write all chars from a string to stdout
 * @str: string to print
 * @ascii: enables restrictions(ascii)
 * Return: number of chars printed
 */
int _puts(char *str, int ascii)
{
char *s;
int i = 0, sum = 0;

while (str[i])
{
if (((str[i] >= 0 && str[i] < 32) || str[i] >= 127) && ascii)
{
s = convert_base(str[i], 16, 1);
sum += write(1, "\\x", 2);
if (str[i] >= 0 && str[i] < 16)
sum += _putchar('0');
sum += _puts(s, 0);
free(s);
i++;
}
else
{
sum += _putchar(str[i]);
i++;
}
}
return (sum);
}
