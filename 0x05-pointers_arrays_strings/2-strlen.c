#include "main.h"
/**
 * _strlen - string length function
 * @s: character to get len
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
