#include "main.h"

/**
 * convert_alpha_numeric - turns digits to char
 * @nb: digit for converting
 * @upper: checks the case 
 * Return: converted value
 */
int convert_alpha_numeric(int nb, int upper)
{
if (nb >= 10)
return (nb - 10 +((upper) ? 'A' : 'a'));
else
return (nb + '0');
}

/**
 * convert_base - convert unsigned from base 10
 * @nb: decimal Number
 * @base: base to convert from
 * @upper: upper case check
 * Return: converted number to string
 */

char *convert_base(unsigned long nb, unsigned int base, int upper)
{
int i = 0;
char *str;
unsigned long nbr = nb;

while (nbr >= base)
{
nbr /= base;
i++;
}

str = malloc(sizeof(char) * i + 2);
if (!str)
return (0);
str[i + 1] = '\0';

while (i >= 0)
{
nbr = nb % base;
str[i] = convert_alpha_numeric(nbr, upper);
nb /= base;
i--;
}
return (str);
}
