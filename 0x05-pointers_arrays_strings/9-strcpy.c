#include "main.h"

/**
 * _strcpy - copies the string pointed to by the src
 * @dest: pointer to the buffer to which the string is copy
 * @src: string to be the copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int m, n;

	m = 0;

	while (src[m] != '\0')
	{
		m++;
	}

	for (n = 0; n < m; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
