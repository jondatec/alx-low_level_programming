#include "main.h"
/**
 * swap_int - function to swap values of integers
 * @a: integer pointer to swap
 * @b: integer pointer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
