#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Definition: this function alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int col = 0;

	while (col <= 10)
	{
		int ro = 'a';

		while (ro <= 'z')
		{
			_putchar(ro);
			ro++;
		}
		_putchar('\n');
		col++;
	}
}
