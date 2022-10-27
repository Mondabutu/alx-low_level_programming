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
		char c[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'}; 

		m = 0;
		while (s[m] )
		{

			for (k = 0; k <= 7; k++)
			{
				if (s[m] == c[k] || s[m] - 32 == c[k])
				{
					s[m] = k + 0;
				}
				k++
			}
			m++
		}
		return (s)
}
