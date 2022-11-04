#include <stdio.h>
#include "main.h"

/**
 * main -program that prints all arguments it receives
 * @argc: Count the arguments
 * @argv: The recieved arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int k = 0;

	if (argc > 0)
	{
		while (k < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
