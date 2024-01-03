#include "main.h"
/**
 * print_rev - function printing in reverse
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	if (*s == '\0')
		return;
	print_rev(s + 1);
	_putchar(*s);
}
