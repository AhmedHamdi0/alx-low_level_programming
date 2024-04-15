#include <stdio.h>

#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int i;
	int bits = sizeof(n) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
