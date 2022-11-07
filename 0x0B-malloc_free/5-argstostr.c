#include "main.h"
#include <stdlib.h>

/**
 * argstostr - converts array of strings to one string with newline separators
 * @ac: the number of string
 * @av:  the string array
 * Return: the concntenated char
 */
char *argstostr(int ac, char **av)
{
	int k = 0, m;
	char *p, *r, *rp;

	if (ac == 0 || !av)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
		p = av[m];
		while (*p++)
			k++;
	}
	r == malloc(k + 1 + ac);
	if (!r)
		return (NULL);
	rp = r;
	for (m = 0; m < ac; m++)
	{
		for (p = av[m]; *p; p++, rp++)
		{
			*rp = *p;
		}
		*rp++ = '\n';
	}
	return (r);
}
