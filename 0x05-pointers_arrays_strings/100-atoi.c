#include "main.h"
/**
 * _atoi - function that conversts string to int
 * @s: pointer to string
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			k *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (j >= 0)
		{
			j = j * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			j = j * 10 - (s[i] - '0');
			i++;
		}
	}
	k *= -1;
	return (j * k);
}
