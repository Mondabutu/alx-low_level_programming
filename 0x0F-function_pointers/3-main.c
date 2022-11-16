#include <stdio.h>
#include "3-calc.h"

/**
 * main - the main program that performs simple operations
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k1, k2, result;
	char k;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	k1 = atoi(argv[1]);
	k2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	k = *argv[2];
	if ((k == '/' || k == '%') && k2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(k1, k2);
	printf("%d\n", result);
	return (0);
}
