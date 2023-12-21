#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_1month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_left = 0;
    int i;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        days_in_1month[1] = 29;
    }

    for (i = month - 1; i < 12; i++)
    {
        days_left += days_in_1month[i];
    }

    days_left -= day - 1;

    printf("Day of the year: %d\n", 366 - days_left);
    printf("Remaining days: %d\n", days_left);
}
