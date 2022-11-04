#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: Parameters counter
 * @argv: Parameter Pointer
 * Return: The integer
 */
int main(int argc, char *argv[])
{
	int k, m, sum = 0;

	for (k = 1; k < argc; k++)
	{
		for (m = 0; argv[k][m] != '\0'; m++)
		{
			if (!isdigit(argv[k][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);

	return (0);
}
