#include "main.h"
/**
 * print_to_98 - Entry point
 *
 * Definition: function prints all nutural numbers from n - 98
 * @n: starting point
 * Return: void
 */
void print_to_98(int n)
{
	int i, j;
	char c;

	while (n != 98)
	{
		i = n / 10;
		j = n % 10;
		if (i != 0)
		{
			c = i + '0';
			_putchar(c);
		}
		c = j + '0';
		_putchar(c);
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else
			n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
