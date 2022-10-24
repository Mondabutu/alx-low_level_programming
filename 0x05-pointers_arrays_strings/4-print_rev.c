#include "main.h"

/**
 * print_rev - functions that print string in reverse,followed by new line
 * @s: a string
 *
 * Return: the reverse string
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != 0)
	{
		k++;
	}
	while (k > 0)
	{
		k--;
		_putchar(s[k]);
	}
	_putchar('\n');
}
