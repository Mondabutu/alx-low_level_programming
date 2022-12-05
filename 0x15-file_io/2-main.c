#include "main.h"
/**
 * main - The main header function
 * @ac: arguments for the main
 * @av: arguments for the main
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
	k = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", k);
	return (0);
}