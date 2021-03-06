#include "main.h"

/**
 * _strrev - Entry point
 * _strrev - function is used to reverse the given string.in string.h
 * @str: The given string which is needed to be reversed.
 * Return: the reverse string
*/
char *_strrev(char *str)
{
	int i;
	int len = 0;
	char c;

	if (!str)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		c = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = c;
	}
	return (str);
}
