#include "main.h"

/**
 * more_numbers - 10 times table for 1 - 14
 * Description: Use _putchar to print numbers
 * Return: diolay result
 */

void more_numbers(void)
{
	int n, row;

	for (row = 1; row < 10; row++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)

				_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');
	}
	_putchar('\n');
	}
}
