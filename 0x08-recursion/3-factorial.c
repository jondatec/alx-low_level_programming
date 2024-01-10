#include "main.h"
/**
 * factorial - functions that returns a factorial of a given numbers
 *
 * @n: integer
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
