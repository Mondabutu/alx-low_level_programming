#include "main.h"
#include <stdlib.h>

/**
 * strtow - functions that converts a string into its separate words
 * @str: The string to convert into words
 * Return: The 2-Dimensional Array
 */
char **strtow(char *str)
{
	char **r, *p = str;
	int w = 0, k = 0;

	if (str == 0 || *str == 0)
		return (0);
	while (*p)
	{
		if (!(*p == ' ') && (*(p + 1) == ' ' || *(p + 1) == 0))
			w++;
		p++;
	}
	if (w == 0)
		return (NULL);
	r = malloc((w + 1) * sizeof(char *));
		if (r == 0)
			return (0);
	while (*str)
	{
		if (*str != ' ')
		{
			for (p = str, w = 0; *p != ' ' && *p != 0;)
				w++, p++;
			r[k] = malloc(w + 1);
			if (r[k] == 0)
			{
				while (k >= 0)
					free(r[--k]);
				free(r);
				return (0);
			}
			p = r[k++];
			while (*str != ' ' && *str != 0)
				*p++ = *str++;
			*p = 0;
		}
		else
			str++;
	}
	r[k] = 0;
	return (r);
}
