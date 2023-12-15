#include <stdio.h>
/**
 * main - Entry point
 *
 * Definition: program that prints the alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char low_Alph;

	low_Alph = 'a';
	while (low_Alph <= 'z')
	{
		putchar(low_Alph);
		low_Alph++;
	}
	putchar('\n');
	return (0);
}
