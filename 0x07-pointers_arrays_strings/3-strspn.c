#include "main.h"
/**
 * _strspn - return length of string that maches values
 * @s: String to search
 * @accept: target that matches
 * Return: numbers of bytes consecutively matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int k = 0, j;
	int m = 0;

	while (s[k] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[k] == accept[j])
			{
				m++;
				break;
			}
			if (accept[j + 1] == '\0' && s[k] != accept[j])
				return (m);
		}
		k++;
	}
	return (m);
}
