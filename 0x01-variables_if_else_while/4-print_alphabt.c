#include <stdio.h>
/**
 * main - Entry point
 *
 * Definition: program prints lowercase alphabet with exception
 * Return: 0 (success)
 */
int main(void)
{
	int low_Alph = 'a';

	while (low_Alph <= 'z')
	{
		if ((low_Alph == 'q') && (low_Alph == 'e'))
			continue;
		putchar(low_Alph);
		low_Alph++;
	}
	putchar('\n');
	return (0);
}
