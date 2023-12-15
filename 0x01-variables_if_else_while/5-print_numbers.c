#include <stdio.h>
/**
 * main - Entry point
 *
 * Definition: Program that prints numbers of base ten
 * Return: 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
