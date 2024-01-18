#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(*array) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		array[i] = min;
	return (array);
}
