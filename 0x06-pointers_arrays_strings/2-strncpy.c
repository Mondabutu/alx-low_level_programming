#include "main.h"
/**
 * _strncpy - copies string from src to dest
 * @dest: where the string is stored
 * @src: The source string
 * @n: Maximum number of bytes to be copied
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0, k = 0;

	while (src[m])
		k++;
	for (m = 0; src[m] && m < n; m++)
		dest[m] = src[m];
	for (index = k; m < n; m++)
		dest[m] = '\0';

	return (dest);
}
