#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - calls a function to act on array elements
 * @array: The array name on which the function is acting on
 * @size: The size of the passed array to function
 * @action: The function acting on the array element
 * Return: Null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (!array || !action)
		return;
	for (k = 0; k < size; k++)
		action(array[i]);
}
