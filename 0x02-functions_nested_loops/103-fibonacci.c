#include <stdio.h>
/**
 * main - finds and prints the sum of the even terms
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int m;
	unsigned long int n, p, nxt, sum;

	n = 1;
	p = 2;
	sum = 0;
	for (m = 1; m <= 33; ++m)
	{
		if (n < 4000000 && (n % 2) == 0)
		{
			sum = sum + n;
		}
		nxt = n + p;
		n = p;
		p = nxt;
	}
	printf("%lu\n", sum);
	return (0);
}



