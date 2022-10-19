#include <stdio.h>
/**
 * main - print 50 fibonacci numbers, starting with 1 and 2
 *        separated by comma followed by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int cn;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (cn = 0; cn < 50; cn++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (cn == 49)
			printf("\n");
		else
			printf(", ");

	}
}
