#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: The numbers of parameters
 * @argv: the parameter
 * Description: this program prints opcodes in hex
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int k, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (k = 0; k < n; k++)
	{
		printf("%02hhx", *((char *)main + k));
		if (k < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
