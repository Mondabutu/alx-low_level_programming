#include <stdio.h>

/**
 * main - fizz buzz
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		if (n % 5 == 0)
		{
			printf("Buzz");
		}
		if (n % 3 != 0 && n % 5 != 0)
		{
			printf("%i", n);
		}
		if (n < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
