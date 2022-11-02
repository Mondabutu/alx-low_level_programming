#include "main.h"

/**
 * factorial - returns the fatorial of a given number
 * @n:  Number to return factorial
 * Return: returns -1 if n is lower than 0
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
