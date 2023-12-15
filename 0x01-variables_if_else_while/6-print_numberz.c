#include <stdio.h>
/**
 * main - Entry point
 *
 * Definition: Program that prints numbers of base 10 with putchar
 * Return: 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	putchar('\n');
	return (0);
}
