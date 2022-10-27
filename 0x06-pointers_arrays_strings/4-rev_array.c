#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 *
 * @a: a is the array
 * @n: is the number of elements
 * Return: Always 0
 */
void reverse_array (int *a, int n)
{
	int m = 0;
	int T;

	n = n - 1;
	while (m <= n)
	{
		T = a[m];
		a[m++] = a[n];
		a[n--] = T;
	}
}
