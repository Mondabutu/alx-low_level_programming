#include <stdio.h>

/**
 * main -  prints the largest prime factor
 * Return: Always 0
 */

int main(void)
{
	unsigned long n = 612852475143;
	int d = 2;
	unsigned long p;

	while (n != 1)
	{
		if (n % d == 0)
		{
			n = n / d;
			p = d;
		}
		d++;
	}
	printf("%1d\n", p);

	return (0);
}
