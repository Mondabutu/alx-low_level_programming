#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: The first string
 * @s2: The string to add to th end of the first string
 *
 * Return: The pointer to newly allocated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int k1 = 0, k2 = 0;
	char *p, *r;

	p = s1;
	if (s1)
		while (*p++)
			k1++;
	else
		s1 = "";
	p = s2;
	if (s2)
		while (*p++)
			k2++;
	else
		s2 = "";
	r = malloc(k1 + k2 + 1);
	if (!r)
		return (NULL);
	p = r;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = 0;
	return (r);
}

