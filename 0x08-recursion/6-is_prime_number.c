#include "main.h"

/**
 * evaluate_prime - evaluate prime number
 * @m: The number
 * @k: Number to iterate
 * Return: return 0 or 1
 */
int evaluate_prime(int num, int k)
{
	if (num - 1 == k)
	{
		return (1);
	}
	else if (num % k == 0)
	{
		return (0);
	}
	if (num % k != 0)
	{
		return (evaluate_prime(num, k + 1));
	}
	return (0);
}
/**
 * is_prime_number - evaluate prime or not
 * @num: number
 * Return: return prime if 1. otherwise return 0
 */
int is_prime_number(int num)
{
	int k;

	k = 2;
	if (num < 2)
	{
		return (0);
	}
	if (num == 2)
	{
		return (1);
	}
	return (evaluate_prime(num, k));
}
