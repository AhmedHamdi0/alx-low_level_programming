#include "main.h"


/**
 * check_prime - Recursive helper function to check primality.
 * @n: The number to be checked.
 * @divisor: The divisor to check primality against.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int check_prime(int n, int divisor)
{
	if (divisor >= n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_prime(n, 2));
}
