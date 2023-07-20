#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * Description: This function takes an integer `n` and prints its last digit.
 *              It then returns the value of the last digit.
 *
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
{
last_digit *= -1;
}

_putchar('0' + last_digit);

return (last_digit);
}

