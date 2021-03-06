#include "main.h"
/**
 * get_func - gets function for conversion
 * @cr: char to use for selection
 * @arg: start of a list
 * Return: pointer to function
 */
int get_func(char cr, va_list arg)
{
	int i = 0;

	function_identifier f[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	for (i = 0; f[i].c != NULL; i++)
	{
		if (f[i].c[0] == cr)
		{
			return (f[i].f(arg));
		}
	}

	return (0);
}
