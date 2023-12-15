#include <stdio.h>
/**
 * main - Entry point
 *
 * Definition: Program to print alphabet in lowercase and then uppercase"
 * Return: 0 (Success)
 */
int main(void)
{
	char low_Alph = 'a';
	char upper_Alph = 'A';

	while (low_Alph <= 'z')
	{
		putchar(low_Alph);
	}
	while (upper_Alph <= 'Z')
	{
		putchar(upper_Alph);
	}
	putchar('\n');
	return (0);
}
