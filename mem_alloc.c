#include "main.h"

/**
 * mem_alloc - return a point to the memory created
 * @a: the string to get the size from
 * Return: - memory to a pointer
*/

char *mem_alloc(const char *a)
{
	char  *mem = malloc(strlen(a) + 1);

	if (!mem)
		return (NULL);
	return (mem);
}
