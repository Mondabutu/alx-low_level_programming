#include <stdio.h>
/**
 * main - Prints out the sizes of various data types
 *
 * Return: o if success
 */
int main(void)
{
	char k;
	int i;
	long int g;
	long long int l;
	float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(g));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return(0);
}
	
