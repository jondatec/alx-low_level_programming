#include "main.h"
/**
 * _islower - Entry point
 *
 * Definition: function checks if a character is lowercase
 * @c: character to be referenced to the ascii table
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
