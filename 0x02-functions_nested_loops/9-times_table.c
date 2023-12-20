#include "main.h"
/**
 * void times_table - Entry point
 *
 * Definition: this function prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int ro, col, tab;

	ro = 0;
	while (ro < 10)
	{
		col = 0;
		while (col < 10)
		{
			tab = ro * col;
			if (col == 0)
			{
				_putchar('0' + tab);
			}
			else if (tab < 10)
			{
				_putchar(' ');
				_putchar('0' + tab);
			}
			else
			{
				_putchar('0' + tab / 10);
				_putchar('0' + tab % 10);
			}
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			col++;
		}
		ro++;
		_putchar('\n');
	}
}
