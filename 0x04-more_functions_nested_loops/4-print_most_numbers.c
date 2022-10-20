#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 and 9 except 2 and 4
 * Description: Use _putchar for printing
 * Return: the answer
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}
