#include <stdio.h>
/**
 * main - Entry point
 *
 * Definition: Program that prints all possible combination of 3
 * Return: 0 (success)
 */
int main(void)
{
	int n = 48;
	int m, o;
	int p = 44;

	while (n <= 57)
	{
		m = n + 1;
		while (m <= 57)
		{
			o = m + 1;
			while (o <= 57)
			{
				putchar(n);
				putchar(m);
				putchar(o);
				if (n != 55 || m != 56 || o != 57)
				{
					putchar(p);
					putchar(32);
				}
				o += 1;
			}
			m += 1;
		}
		n += 1;
	}
	putchar('\n');
	return (0);
}
