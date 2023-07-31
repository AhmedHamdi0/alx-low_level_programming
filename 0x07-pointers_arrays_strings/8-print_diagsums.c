#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the 2D array representing the square matrix.
 * @size: Size of the square matrix (number of rows or columns).
 */
void print_diagsums(int *a, int size)
{
	int i, primary_diag_sum = 0, secondary_diag_sum = 0;

	for (i = 0; i < size; i++)
	{
		primary_diag_sum += a[i * size + i];
		secondary_diag_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", primary_diag_sum, secondary_diag_sum);
}
