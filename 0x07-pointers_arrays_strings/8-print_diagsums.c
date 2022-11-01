#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size:size of matrix
 */
void print_diagsums(int *a, int size)
{
	int dsum_1 = 0;
	int dsum_2 = 0;
	int rw, k;

	for (rw = 0; rw < size; rw++)
	{
		k = (rw * size) + rw;
		dsum_1 += a[k];
	}

	for (rw = 1; rw <= size; rw++)
	{
		k = (rw + size) - rw;
		dsum_2 += a[k];
	}
	printf("%d, %d\n", dsum_1, dsum_2);
}
