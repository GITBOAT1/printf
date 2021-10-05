#include <stdio.h>
#include "main.h"
/**
 * get_func - gets function for conversion
 * @c: char to use for selection
 * Return: pointer to function
 */
int (*get_func(const char c))(va_list)
{
int i = 0;

function_identifier f[] = {
{"c", print_char},
{"s", print_str},
{"S", print_str_x},
{"%", print_percent},
{"d", print_int},
{"b", print_binary},
{"i", print_int},
{"u", print_unsigned},
{"o", print_octal},
{"x", print_hexa_lower},
{"X", print_hexa_upper},
{"p", print_ptr},
{"r", print_str_reverse},
{"R", print_rot13},
};

while (i < 14)
{
if (c == f[i].c[0])
return(f[i].f);
i++;
}
return(NULL);
}

/**
* _printf - a function with similar features to printf
* @format: format astring
* Return: number of character printed excluding the null byte
*/

int _printf(const char *format, ..)
{
unsigned int i;
int typeCheck = 0, charRtn = 0;

va_list arg;

va_start(arg, format);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
charRtn++;
continue;
}

if (format[i + 1] == '%')

_putchar('%');
charRtn++;
i++;
continue;
}

if (format[i + 1] == '\0')
{
return (-1);
}

typeCheck = get_func(format[i + 1], arg);

if (typeCheck == -1 || typeCheck != 0)
{
i++;
}

if (typeCheck > 0)
{
charRtn += typeCheck;
}

if (typeCheck == 0)
{
_putchar('%');
charRtn++;
}

va_end(arg);
return (charRtn);
}
