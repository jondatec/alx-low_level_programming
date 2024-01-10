#include "main.h"
/**
 * _strlen_recursion - function finds length of strings
 *
 * @s: string
 * Return: 1 if T or 0 if F
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
