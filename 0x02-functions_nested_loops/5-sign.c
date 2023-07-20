#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * Description: This function checks the sign of the input integer `n`.
 *
 * @n: The number to check the sign of
 *
 * Return: 1 if `n` is > zero, 0 if `n` is zero, -1 if `n` is < zero
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

