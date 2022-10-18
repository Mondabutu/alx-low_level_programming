#include "main.h"

/**
 *print_alphabet_x10 - print alphabet_10x
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
	char k;
	int i;

	i = 0;

	while (i < 10)
	{
		k = 'a';
		while (k <= 'z')
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
		i++;
	}
}
