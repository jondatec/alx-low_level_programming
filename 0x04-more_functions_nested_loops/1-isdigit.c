#include "main.h"
/**
 * _isdigit - Entry point
 *
 * Definition: function checks for digits
 * @c: character/ integer
 * Return: 1 for success and 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
