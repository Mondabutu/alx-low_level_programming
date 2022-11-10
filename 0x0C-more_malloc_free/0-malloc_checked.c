#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The integet variable which hold the memory size
 *
 * Return: Alwys return 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	       exit(98);
	return (p);
}
