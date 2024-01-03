#include "main.h"
/** _puts - function to output a string
 * @str - pointer to strign to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
