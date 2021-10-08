#include "main.h"

/**
 * d_fun - Entry point
 * @j: - entry try
 * Return: Always j
 */
int d_fun(int j)
{
	_itoa(va_arg(vl, int), tmp, 10);
	strcpy(&buff[j_m], tmp);
	j_m += strlen(str_arg);
	j = j_m;
	return (j);

}
/**
 * i_fun - Entry point
 * @j: - test return
 * Return: Always 0
 */

int i_fun(int j)
{
	_itoa(va_arg(vl, int), tmp, 10);
	strcpy(&buff[j_m], tmp);
	j_m += strlen(tmp);
	j = j_m;
	return (j);
}
