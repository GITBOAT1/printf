 #include "main.h"

/**
 * choice - making a choice between numbers
 * @a: the choice
 * Return: Always 0
 */

int choice(char a)
{
	if (a == 'c')
		return (0);
	else if (a == 'i')
		return (1);
	else if (a  == 's')
		return (2);
	else if (a == 'd')
		return (3);
	return (0);
}
