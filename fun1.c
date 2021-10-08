#include "main.h"
/**
 * c_fun - the.
 * @z: is ad
 * Return: z
*/
int c_fun(int z)
{
	buff[j_m] = (char)va_arg(vl, int);
	j_m++;
	z = j_m;
	return (z);
}

/**
 * s_fun - Entry point
 * @j: - return val
 * Return: Always j
 */
int s_fun(int j)
{
	str_arg = va_arg(vl, char*);
	strcpy(&buff[j_m], str_arg);
	j_m += strlen(str_arg);
	j = j_m;
	return (j);
}
