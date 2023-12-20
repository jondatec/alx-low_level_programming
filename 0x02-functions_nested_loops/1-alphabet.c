#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Definition: this function prints alphabets in lowercase
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
}
