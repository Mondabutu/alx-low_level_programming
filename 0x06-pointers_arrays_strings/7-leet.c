#include "main.h"

/**
 * leet - encode a string
 * @s: the string to encode
 *
 * Return: the encode string
 */

char *leet(char *s)
{
	int m, k
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (k = 0; k < 5; k++)
		{
			if (s[m] == s1[k] || s[m] == S1[k])
			{
				s[m] = s2[k];
				break;
			}
		}
	}
	return (s)
i}
