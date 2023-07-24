#include <stdio.h>
#include "main.h"
/**
* print_array - Prints the elements of an integer array.
*
* @a: Pointer to the integer array to be printed.
* @n: Number of elements in the array.
*/

void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}

