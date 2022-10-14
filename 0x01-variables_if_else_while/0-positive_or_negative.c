#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main - Determine if a random number is positive,negative, or zero
 *
 * Return: o if (success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is %s\n", n, "Positive");
	}
	else if (n==0)
	{
		printf("%d is %s\n", n, "zero");
	}
	else
	{
		printf("%d is %s\n", n, "negative");
	}
	return (0);
}
