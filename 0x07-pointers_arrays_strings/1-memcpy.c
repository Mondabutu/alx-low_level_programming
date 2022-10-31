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
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
