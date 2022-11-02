#include "main.h"

/**
 * sqrt_num - find the square root of natural num
 * @p: number to square
 * @k: Number suare root
 * Return: -1 if non natural squate root
 */
int sqrt_num(int p, int k)
{
	if (p * p == k)
	{
		return (p);
	}
	else if (p * p > k)
	{
		return (-1);
	}
	else
	{
		return (sqrt_num(p + 1, k));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: all natural suare root found
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_num(n, 1));
}
