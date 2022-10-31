#include "main.h"

/**
 * _memcpy - functions that copies memory are
 * @dest: destination of character
 * @src: source of character
 * @n: unsigned integer
 * Return: memory content
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;
	char *st = dest;

	while (k < n)
	{
		*dest++ = src++;
		k++;
	}
	return (st);
}
