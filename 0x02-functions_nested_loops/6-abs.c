#include "main.h"
/**
 * _abs - Entry point
 *
 * Definition: this function computes the absolute value of integers
 * @i: character to be checked and transformed
 * Return: 1 (Success)
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
	return (1);
}
