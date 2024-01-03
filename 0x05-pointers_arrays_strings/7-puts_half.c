#include "main.h"
/**
 * puts_half - function to print half of tha string
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i])
		i++;
	j = i / 2;
	if (i % 2 != 0)
		j += 1;
	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
