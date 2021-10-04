#include "main.h"

/**
* _printf - a function with similar features to printf
* @format: format astring
* Return: number of character printed excluding the null byte
*/

int _printf(const char *format, ..)
{
int i = 0, sum =0, j, p = 0;
int (*function)();

va_list ap;
va_start(ap, format);

if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);

if (format[0] == '%' && format[1] == ' ' && !format[2])
return(-1);

while (format[i])
{
if (format[i] == '%')
{
j = check_modifier(format[i + 1]);

if (j == 0)
{
if (format[i + 1] != '\0')
function = get_func(format[i + 1]);
} else if (j < 0)
{
p = 1;
if (format[i + 1] != '\0')
function = get_func(format[i + 2]);
} else
{
p = 1;
sum += j;
i += j;
function = get_func(format[i + 1]);
}

if (function == NULL)
{
_putchar(format[i]);
sum++;
i++;
} else
{
sum += function(ap);
i += 2;
continue;
}
} else
{
if (p == 0)
{
_putchar(format[i]);
sum++;
i++;
} else
{
function = get_func(format[i + 1]);
if (function == NULL)
{
_putchar(format[i]);
sum++;
i++;
} else
{
sum += function(ap);
i += 2;
continue;
}
}
}
}
va_end(ap);
return (sum);
}
