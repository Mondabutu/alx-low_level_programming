#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the grid width
 * @av: The grid's height
 * Return: the args one line at a time
 */
char *argstostr(int ac, char **av)
{
	char *k;
	int cnt = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			cnt++;
			b++;

		}
		a++;
	}
	cnt = cnt + ac + 1;
	k = malloc(sizeof(char) * cnt);
	if (k == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			k[c] = av[a][b];
			c++;
		}
		k[c] = '\n';
		c++;
	}
	return (k);
}
