#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Definition: Program to find out if random number is > 5, is 0 or < 6
 *
 * Return: null (success)
 */
int main(void)
{
	int n;
	int x = n%10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else if ((x < 6) && (x != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
