#include "main.h"

/**
 * main - print alphabet in lowercase followed by new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char k;

	ch = 'a';

	while (k <= 'z')
	{
		_putchar(k);
		k++;
	}

	_putchar('\n');
}
