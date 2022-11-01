#include "main.h"
#define NULL 0
/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 *
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int k = 0, p;

	while (s[k] != '\0')
	{
		for (p = 0; accept[p] != '\0'; p++)
		{
			if (s[k] == accept[p])
			{
				s = &s[x];
				return (s);
			}
		}
		k++
	}
	return (NULL);
}
