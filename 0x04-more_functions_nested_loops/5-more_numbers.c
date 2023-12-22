#include "main.h"
/**
 * more_numbers - Entery point
 *
 * Definition: function prints 0 - 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	char i, j;
	int k = 0;

	while (k < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			j = i;
			if (i > 9)
			{
				_putchar('1');
				j = i % 10;
			}
			_putchar('0' + j);
		}
		_putchar('\n');
		k++;
	}
}
