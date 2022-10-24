#include "main.h"

/**
 * swap_int - Swaps the value of two integer
 * @a: integer 1
 * @b: integer 2
 */

void swap_int(int *a, int *b)
{
	int k = *a;

	*a = *b;
	*b = k;
}
