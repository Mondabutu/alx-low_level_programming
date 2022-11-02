#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: Pointed bloc of memory to fill with character
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
