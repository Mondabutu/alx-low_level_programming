#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: The array size
 * @c: The string
 * Return: always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int k;

	if (size == 0)
	{
		return (NULL);
	}

	/* Define values with malloc */
	b = (char *) malloc(size * sizeof(c));

	if (b == 0)
	{
		return (NULL);
	}
	else
	{
		k = 0;
		while (k < size)
		{
			*(b + k) = c;
			k++;
		}
		return (b);
	}
}
