#include "main.h"
/**
 * _printf - writes the character c to stdout 100 charcter
 * @str: The character to print
 * Return: On success number os read.
 */
int _printf(const char *str, ...)
{
	size_t s;

	func_ptr[0] = c_fun;
	func_ptr[1] = i_fun;
	func_ptr[2] = s_fun;
	func_ptr[3] = d_fun;

	va_start(vl, str);
	buff = mem_alloc(str);
	if (!buff)
		return (-1);
	i_m = 0;
	j_m = 0;
	for (s = 0; s < strlen(str); s++)
	{
		printf("inthr len  %d\n",s);
		if (str[i_m] == '%')
		{
			i_m++;
			func_ptr[choice(str[i_m])](i_m);
		}
		else
		{
			buff[j_m] = str[i_m];
			j_m++;
		}
		i_m++;
	}
	print(buff);
	va_end(vl);
	free(buff);
	return (j_m);
}
