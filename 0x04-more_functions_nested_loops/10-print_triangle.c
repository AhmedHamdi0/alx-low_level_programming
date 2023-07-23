#include "main.h"

/**
* print_triangle - Prints a triangle using the '#' character.
* @size: The size of the triangle to be printed.
*/

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j, k;
for (k = 0; k < size; k++)
{
for (j = size - 1; j > k; j--)
{
_putchar(' ');
}
for (i = 0; i < k + 1; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

