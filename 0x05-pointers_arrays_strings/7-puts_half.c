#include "main.h"

/**
 * puts_half - Print half of the string
 *
 * @str: the string
 */

void puts_half(char *str)
{
	int m, n, k;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	if ((n % 2) == 0)
		k = (n / 2);
	else
		k = (n + 1) / 2;
	for (m = k; m < n; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n')
}
