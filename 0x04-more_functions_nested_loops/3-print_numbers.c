#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 * Description: Use _putchar for printing the numbers
 * Return: The numbers
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
