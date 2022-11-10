#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The integet variable which hold the memory size
 *
 * Return: Alwys return 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	       exit(98);
	return (pt);
}
