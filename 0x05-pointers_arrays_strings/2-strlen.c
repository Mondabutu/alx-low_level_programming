#include "main.h"

/**
 * _strlen - give the length of the string
 * @s: the string
 *
 * Return: k. the length of the string
 */

int _strlen(char *s)

{
	int k;

	while (*s != '\0')
	{
		k = k + 1;
		s = s + 1;
	}
	return (k);
}
