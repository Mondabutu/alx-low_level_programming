#include "3-calc.h"

/**
 * op_add - Calculate the sum of two integers
 * @a: the first integer
 * @b: The second integer
 * Return: The sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_add - Calculate the subtraction of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The subtration
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculates the product of two integers
 * @a: first integer
 * @b: Second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculates the division of two numbers
 * @a: first number
 * @b: second number
 * Return: the division result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus operation
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
