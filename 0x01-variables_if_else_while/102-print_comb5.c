#include <stdio.h>
/**
 * main - Entry point
 *
 * Definition: program that prints all combinations of
 *             two two digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int n = 48;
	int m = 0;
	int o;
	int p = 44;

	while (m <= 99)
	{
		o = m + 1;
		while (o <= 99)
		{
			putchar((m / 10) + n);
			putchar((m % 10) + n);
			putchar(32);
			putchar((o / 10) + n);
			putchar((o % 10) + n);
			if (m != 98 || o != 99)
			{
				putchar(p);
				putchar(32);
			}
			o += 1;
		}
		m += 1;
	}
	putchar('\n');
	return (0);
}
