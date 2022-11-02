#include "main.h"

/**
 * sqrt_num - find the square root of natural num
 * @p: number to square
 * @k: Number suare root
 * Return: -1 if non natural squate root
 */
int sqrt_num(int k, int p)
{
	if (p * p > k)

		return (-1);

	else if (p * p == k)

		return (p);

	else

		return (sqrt_num(k, p + 1));
	return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: all natural suare root found
 */
int _sqrt_recursion(int n)
{
	return (sqrt_num(n, 1));
}
