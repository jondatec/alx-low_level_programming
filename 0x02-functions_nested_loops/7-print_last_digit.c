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
	if (i < 0)
		return (-i % 10);
	else
		return (i % 10);
}

