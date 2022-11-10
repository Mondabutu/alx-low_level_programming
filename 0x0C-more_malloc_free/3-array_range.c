#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: The maximum value
 * Return: The array
 */
int *array_range(int min, int max)
{
	int *p, k = 0, n = min;

	if (min > max)
		return (0);
	p = malloc((max - min + 1) * sizeof(int));

	if (!p)
		return (0);
	while (k <= max - min)
		p[k++] = n++;
	return (p);
}
