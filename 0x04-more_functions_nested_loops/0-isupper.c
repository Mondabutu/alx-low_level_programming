#include "main.h"

/**
 * _isupper - defineif a characcter is uppercase
 *
 * Description: use _putchar to print the alphabet
 * @c: input character
 * Return: 1 if uppercase or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
