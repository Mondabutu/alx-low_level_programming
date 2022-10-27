#include "main.h"

/**
 * string_toupper - change all stringinto capital letters
 * @s: string to be capitalized
 * Return: Always 0
 */

void *string_toupper(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if ((s[k] >= 97) && (s[k] <= 122))
		{
			s[k] = s[k] = 32
		}
		k++;
	}
	return (s);
}
