#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: this function checks if a character is alpha
 * @c: the character to check
 * Return: 1 (success) and 0 (otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
