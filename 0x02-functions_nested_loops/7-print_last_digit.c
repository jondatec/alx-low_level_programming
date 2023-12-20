#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Definition: this function prints the last digit of a number
 * @i: number
 * Return: i (success)
 */
int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
	{
		_putchar(-j + '0');
		return (-j);
	}
	else
	{
		_putchar(j + '0');
		return (j);
	}
}

