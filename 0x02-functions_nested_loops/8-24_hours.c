#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Decsription: function that prints every min of the day
 *              of Jack Bauer starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int hr, i, j, min, k, l;

	hr = 0;
	while (hr <= 23)
	{
		i = hr / 10;
		j = hr % 10;

		min = 0;
		while (min < 60)
		{
			k = min / 10;
			l = min % 10;
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
