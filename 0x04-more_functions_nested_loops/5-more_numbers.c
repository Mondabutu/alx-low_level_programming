#include "main.h"

/**
 * more_numbers - 10 times table for 1 - 14
 * Description: Use _putchar to print numbers
 * Return: diolay result
 */

void more_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
