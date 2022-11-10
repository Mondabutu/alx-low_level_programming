#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size:  the new size, in bytes of the new memory block
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *k, *r;
	unsigned int i;

	if (ptr != NULL)
	{
		k = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	r = malloc(new_size);
	if (r == NULL)
	{
		return (0);
	}
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(r + i) = k[i];
	}
	free(ptr);
	return (r);
}
