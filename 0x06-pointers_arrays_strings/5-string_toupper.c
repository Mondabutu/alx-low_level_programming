#include "main.h"

/**
 * string_toupper - change all stringinto capital letters
 * @s: string to be capitalized
 * Return: Always 0
 */

char *string_toupper(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if ((s[k] >= 'a') && (s[k] <= 'z'))
		{
			s[k] = s[k] - 32;
			k++;
		}
	}
	return (s);
}
