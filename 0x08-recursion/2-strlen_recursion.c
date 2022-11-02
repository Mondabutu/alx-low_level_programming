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
	k = _strlen_recursion(s);
	_putchar(k);
	return (0);
}
