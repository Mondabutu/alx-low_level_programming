#include "main.h"

/**
 * _strlen_recursion - return the length of string
 * @s: The string to return length
 * Retun : String lenght
 */
int _strlen_recursion(char *s)
{
	int k;

	if (*s !='\0')
	k = (1 + _strlen_recursion(s + 1));
	_putchar(k);
	return (0);
}
