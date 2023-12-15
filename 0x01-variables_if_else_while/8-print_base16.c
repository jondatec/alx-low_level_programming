#include <stdio.h>
/**
 * main - Entry point
 *
 * Definition: Program that prints all the numbers of base 16
 * Return: 0 (success)
 */
int main(void)
{
	int n = 0;
	int m = 'a';

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
