#include "main.h"
/**
 * _isupper - Entry point
 *
 * Definition: this function checks for uppercase characters
 * @c: the character to be checked
 * Return: 1 if upper and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
