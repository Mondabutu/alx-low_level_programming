#include "main.h"

/**
 * cap_string - capitalized all strings words
 * @s: the string to change the first letter of the word into uppercase
 *
 * Return: uppercase letters
 */

char *cap_string(char *s)
{
	int m = 0;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	while (s[m] != '\0')
	{
		if (m == 0 && s[m] >= 97 && s[m] <= 122)
		{
			s[m] = s[m] - 32;
		}
		n = 0;
		while (c[n] != '\0')
		{

			if (c[n] == s[m] && (s[m + 1] >= 97 && s[m + 1] <= 122))
			{
			s[m + 1] = s[m + 1] - 32;
			}
			n++;
		}
		m++;
	}
	return (s);
}
