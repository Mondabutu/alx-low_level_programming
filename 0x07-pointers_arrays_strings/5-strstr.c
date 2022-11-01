#include "main.h"
#define NULL 0
/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string
 */
char *_strstr(char *haystack, char *needle)
{
	int k = 0, p, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[k] != '\0')
	{
		if (haystack[k] == needle[0])
		{
			x = k, p = 0;
			while (needle[p] != '\0')
			{
				if (haystack[x] == needle[p])
					x++, p++;
				else
					break;
			}
			if (needle[p] == '\0')
			{
				return (haystack + k);
			}
		}
		k++;
	}
	return (NULL);
}
