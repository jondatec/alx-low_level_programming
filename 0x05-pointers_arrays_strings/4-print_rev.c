#include "main.h"
/**
 * print_rev - function printing in reverse
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int t = 0;

	while (s[t])
		t++;
	while (t--)
		_putchar(s[t]);
	_putchar('\n');
}
