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
		char c[] = "aAeEoOtTlL";
		char n[] = "4433007711";

		m = 0;
		while (s[m] != '\0')
		{
			k = 0;
			while (c[k] != '\0')
			{
				if (s[m] == c[k])
				{
					s[m] = n[k];
				}
				k++
			}
			m++
		}
		return (s)
}
