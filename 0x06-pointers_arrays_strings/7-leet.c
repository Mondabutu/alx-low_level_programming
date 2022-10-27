#include "main.h"

/**
 * leet - encode a string
 * @s: the string to encode
 *
 * Return: the encode string
 */

char *leet(char *s)
{
	int m, k;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";
	int m = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[m] == a[k] - 32)
			{
				s[m] = b[k];
			}
		}

	}
	return (s)
}
