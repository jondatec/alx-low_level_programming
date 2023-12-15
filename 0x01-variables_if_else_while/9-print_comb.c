#include <stdio.h>
/**
 * main - Entry point
 *
 * Definition: Program that prints all possible combinations
 *             of single digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int m = 0;

	while (m < 10)
	{
		if (m != 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(48 + m);
		m++;
	}
	putchar('\n');
	return (0);
}
