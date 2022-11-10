#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: First string
 * @s2: the second string
 * @n: The index
 * Return: The character pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int k1 = 0, k2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k1] != '\0')
	{
		k1++;
	}
	while (s2[k2] != '\0')
	{
		k2++;
	}
	if (n > k2)
		n = k2;
	p = malloc((k1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (i = 0; i < k1; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (k1 + n); i++)
	{
		p[i] = s2[i - k1];
	}
	p[i] = '\0';
	return (p);
}

