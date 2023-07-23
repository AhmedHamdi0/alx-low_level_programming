#include "main.h"

/**
 * print_square - Prints a line of hashes.
 * @n: Number of hashes to be printed.
 */

void print_square(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

