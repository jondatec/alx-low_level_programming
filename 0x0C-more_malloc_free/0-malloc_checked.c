#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - memory allocation
 * @b: count
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(sizeof(char) * b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
