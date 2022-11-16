#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that serches for integer
 * @array: The array to search in
 * @size: The array size
 * @cmp: the ponter to the comparing function
 * Return: The index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array && cmp)
	{
		for (k = 0; k < size; k++)
		{
			if (cmp(array[k]) != 0)
				return (k);
		}
	}
	return (-1);
}
