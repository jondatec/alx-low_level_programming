#include <stdio.h>
/**
 * main - Enty point
 *
 * Definition: program to print alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char low_Alph = 'z';

	while (low_Alph >= 'a')
	{
		putchar(low_Alph);
		low_Alph--;
	}
	putchar('\n');
}
