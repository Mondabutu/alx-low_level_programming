#include <stdio.h>
#include "main.h"

/**
 * Main - Program that prints number argurments passed
 * @argc: count the argumments pass
 * @argv: Argument passed
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
