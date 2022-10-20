#include "main.h"

/**
 * print_triangle - print a triangle of size
 * @size: size of the triagle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int m, n;

	if (size <= 0)
		_putchar('\n');
	for (m = 1; m <= size; m++)
	{
		for (n = 1; n <= size; n++)
		{
			if (n <= (size - m))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
