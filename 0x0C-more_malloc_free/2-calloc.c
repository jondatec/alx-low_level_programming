#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: elements
 * @size: byte size
 * Return: pointer p char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		p[j] = 0;
	return (p);
}
