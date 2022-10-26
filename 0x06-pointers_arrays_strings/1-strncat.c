#include "main.h"

/**
 * _strncat - concatenates two strings that will use at most n bytes from src
 * @src: The string to be appended to dest
 * @dest: The string to be appended upon
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return:A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0, k = 0;

	while (dest[m++])
		k++;

	for (m = 0; src[m] && m < n; m++)
		dest[k++] = src[m];
	return (dest);
}
