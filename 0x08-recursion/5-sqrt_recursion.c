#include "main.h"
/**
 * _sqrt - find squreroot
 *
 * @n: in
 * @y: rep
 * Return: sqrt
 */
int _sqrt(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y == n / 2)
		return (-1);
	return (_sqrt(n, y +1));
}
/**
 * _sqrt_recursion - natural squreroot
 *
 * @n: integer character
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	int c;

	c = 0;
	if(n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (_sqrt(n, c));
}
