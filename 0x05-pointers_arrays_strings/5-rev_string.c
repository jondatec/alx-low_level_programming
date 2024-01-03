#include "main.h"
/**
 * rev_string - reverse string function
 * @s: pointer to the reveerse string
 * Return: void
 */
void rev_string(char *s)
{
	int a, b, c;
	char d;

	c = 0;
	while (s[c])
		c++;
	a = 0;
	b = c / 2;
	while (b--)
	{
		d = s[c - a - 1];
		s[c - a - 1] = s[a];
		s[a] = d;
		a++;
	}
}
