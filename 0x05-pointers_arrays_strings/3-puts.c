#include "main.h"

/**
 * _puts -print strings followed by newline
 * @str: pointer type charcter
 *
 * Return: lenght of the string
 */

void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
