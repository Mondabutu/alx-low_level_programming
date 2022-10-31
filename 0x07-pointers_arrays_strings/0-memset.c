#include "main.h"

/**
 * _memset: Functions that fills memory with a constant1
 * @s: pointer to start of memory area
 * @b: constant byte to fill
 * @n: num bytes to fill
 * Return: pointer  to beginning of memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		*(s + k) = b;

	}
	return (s);
}
