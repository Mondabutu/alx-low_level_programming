#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int L;
	long long int Li;
	char k;
	float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(L));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(Li));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
