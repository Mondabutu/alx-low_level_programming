#include "main.h"

/**
 * leet - encode a string
 * @s: the string to encode
 *
 * Return: the encode string
 */

char *leet(char *s)
{
	int m = 0;
	char *r = s;
	char s1[] = {'a', 'e', 'o', 't', 'l'};
	char s2[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for (m = 0; m < 5; m++)
		{
			if (*s == s1[m] || *s == s1[m] - 32)
			{
				*s = s2[m] + '0';
			}
		}
		s++;
	}
	return (r)
}
