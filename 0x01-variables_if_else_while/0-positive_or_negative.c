#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Definition: Program that assign a random number to the var n each time executed
 * Definition: output should be greater than 0 if +, if 0 is zero and if less than 0 is -
 *
 * Return: null (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive \n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero \n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative \n", n);
	}
	return (0);
}
