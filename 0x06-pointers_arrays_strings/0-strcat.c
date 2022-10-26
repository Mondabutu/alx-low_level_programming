#include "main.h"

/**
 * _strcat - Concatenates twp strings
 * @src: The source string to be appended to
 * @dest: The destination of the pointer
 * Return: A pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int k = 0, m = 0;

	while (dest[k++])
		m++;
	for (k = 0; src[k]; k++)
		dest[m++] = src[k];

	return (dest);
}
