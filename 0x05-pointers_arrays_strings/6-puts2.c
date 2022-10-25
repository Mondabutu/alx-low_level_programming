#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first
 * charater, followed by a new line
 * @str: string
 * Return character
 */

void puts2(char *str)
{
	int m;
	int n;

	for (m = 0; str[m] != '\0'; m++)
	{
		;
	}
	for (n = 0; n < m; n = n + 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
