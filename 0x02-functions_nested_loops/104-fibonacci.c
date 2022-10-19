#include <stdio.h>

/**
 * main - Write a program that finds and prints the first 98 Fibonacci numbers, 
 * starting with 1 and 2, followed by a new line
 * 
 * Return: Success
 */
int main(void)
{
	unsigned long int i;
	unsigned long int befr = 1;
	unsigned long int aftr = 2;
	unsigned long int k = 1000000000;
	unsigned long int befr1;
	unsigned long int befr2;
	unsigned long int aftr1;
	unsigned long int aftr2;

	printf("%lu", befr);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aftr);
		aftr += befr;
		befr = aftr - befr;
	}
	befr1 = (befr / k);
	befr2 = (befr % k);
	aftr1 = (aftr / k);
	aftr2 = (aftr % k);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aftr1 + (aftr2 / k));
		printf("%lu", aftr % k);
		aftr1 = aftr1 + befr1;
		befr1 = aftr1 - befr1;
		aftr2 = aftr2 + befr2;
		befr2 = aftr2 - befr2;
	}
	printf("\n");
	return (0);
}
