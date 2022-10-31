#include "main.h"

/**
 * _memset: Functions that fills memory with a constant
 * @s: pointer to start of memory area
 * @b: constant byte to fill
 * @n: num bytes to fill 
 * Return: pointer  to beginning of memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;
	char *st = s;

	while (k < n)
	{
		*s++ = b;
		k++;
	}
	return (st);
}
