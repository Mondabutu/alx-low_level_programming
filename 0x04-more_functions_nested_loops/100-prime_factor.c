#include <stdio.h>

/**
 * main -  prints the largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long n, d;

	n = 612852475143;
	for (d = 2; d < n; d++)
	{
		while (n % d == 0)
			n = n / d;

	}
	printf("%lu\n", n);

	return (0);
}
