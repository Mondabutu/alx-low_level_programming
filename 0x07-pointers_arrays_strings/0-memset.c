#include "main.h"

/**
 * _memset: Functions that fills memory with a constant
 * @s: pointer to start of memory area
 * @b: constant byte to fill
 * @n: num bytes to fill 
 * Return: pointer  to beginning of memory area
 */
char *_memset(char *s, char b, unsigned int n)

{	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
