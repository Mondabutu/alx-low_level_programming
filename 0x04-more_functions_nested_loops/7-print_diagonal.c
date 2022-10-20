#include "main.h"

/**
 * print_diagonal - draw diagonal on the terminal
 * @n: enter a digit
 */
void print_diagonal(int n)
{
	int p, q;

	for (p = 0; p < n; p++)
	{
		for (q = 0; q < p; q++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}

