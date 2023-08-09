#include "main.h"

/**
 * find_sqrt - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @val : Square root.
 *
 * Return: The natural square root of n, or -1 if not found.
 */

int find_sqrt(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (find_sqrt(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n.
 * If n does not have a natural square root, returns -1.
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

