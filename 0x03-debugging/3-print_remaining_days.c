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
if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
{
if (month > 2)
{
day++;
}
}
else
{
if (month == 2 && day == 29)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}
}

int day_of_year = convert_day(month, day);
int days_in_year = (year % 4 == 0 && (year % 100 != 0
|| year % 400 == 0)) ? 366 : 365;
int remaining_days = days_in_year - day_of_year;

printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", remaining_days);
}

