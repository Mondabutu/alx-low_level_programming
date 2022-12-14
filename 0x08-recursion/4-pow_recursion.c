#include "main.h"

/**
 * _pow_recursion - functions that reurn the value of power
 * @x: the value to raise power
 * @y: the power
 * Return: returns -1  for power lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
