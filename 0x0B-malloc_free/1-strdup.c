#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - count the number of array
 * @s: elements in the array
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
/**
 * _strcpy - This copies the arrays
 * @src: Source of Elements of the array
 * @dest: the destination
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	while (src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';

	return (dest);
}

/**
 * _strdup - string duplicates and prints strings array
 * @str: The elements of array
 * Return: the pointer
 */
char *_strdup(char *str)
{
	char *d;
	unsigned int m;

	if (str == 0)
	{
		return (NULL);
	}
	m = _strlen(str) + 1;
	d = (char *) malloc(m * sizeof(char));
	if (d == 0)
	{
		return (NULL);
	}
	_strcpy(d, str);
	return (d);
}
