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
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap = 0;

if (year % 4 == 0)
{
if (year % 100 == 0)
{
if (year % 400 == 0)
leap = 1;
}
else
leap = 1;
}

if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

if (leap && month > 2)
day++;

int day_of_year = day;
for (int i = 1; i < month; i++)
{
day_of_year += days_in_month[i];
}

if (leap && month > 2)
day_of_year++;

printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", leap ? 366 - day_of_year : 365 - day_of_year);
}

