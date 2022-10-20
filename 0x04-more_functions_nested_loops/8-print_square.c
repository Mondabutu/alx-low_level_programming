#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: type a digit
 */

void print_square(int size)
{
	int n, m;

	for (n = 0; n < size; n++)
	{
		for (m = 0; m < size; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
