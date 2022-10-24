#include "main.h"
#include "stdio.h"

/**
 * print_array - print an array of integer
 * @a: the pointer to the element
 * @n: times to print elements
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m < n - 1)
		{
			printf(",");
		}
	}
	printf('\n');
}

