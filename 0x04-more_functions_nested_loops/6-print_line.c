#include "main.h"
/**
 * print_line - Enter point
 *
 * Definition: this function draws a straight  line
 * @n: integer character comparison
 * Return: void
 */
void print_line(int n)
{
	char i = '_';
	int j = 0;

	while (j < n && n > 0)
	{
		_putchar(i);
		j++;
	}
	_putchar('\n');
}
