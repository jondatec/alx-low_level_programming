#include "main.h"
#include "stdio.h"
/**
 * print_array - print elements of an arrray
 * @a: pointer to array
 * @n: elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
