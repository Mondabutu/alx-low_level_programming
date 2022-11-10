#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: The memory
 * @size: The size of the array element
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	unsigned int p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = malloc(nmemb * size);
	if (k == NULL)
		return (NULL);
	for (p = 0; p < (nmemb * size); p++)
		k[p] = 0;
	return (k);
}
