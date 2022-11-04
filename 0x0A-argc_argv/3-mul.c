#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the multiplication of two integers
 * @argc: Argument counter
 * @argv: vector argument
 * Return: 1 if error or 0 if it works
 */
int main(int argc, char *argv[])
{
	int p, k, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]);
	k = atoi(argv[2]);
	m = p * k;

	printf("i\n", m);
		return (0);
}
