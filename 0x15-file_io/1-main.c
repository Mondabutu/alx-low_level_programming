#include "main.h"
/**
 * main - check the code
 * @ac: arguments to main
 * @av: arguments to main
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int k;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	k = create_file(av[1], av[2]);
	printf("-> %i)\n", k);
	return (0);
}