#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * Description: This function takes an integer `n` and
 *              computes its absolute value.
 *
 * @n: The integer for which the absolute value needs to be computed
 *
 * Return: The absolute value of the input integer `n`.
 */

int _abs(int n)
{
if (n < 0)
{
n *= -1;
}

return (n);
}

