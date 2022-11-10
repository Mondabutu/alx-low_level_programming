#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - Define if a string is a number
 * @argv: The string Pointer
 * Return: Always 0
 */
int _isdigit(char *argv)
{
	int k;

	for (k = 0; argv[k]; k++)
		if (argv[k] < 48 || argv[k] > 57)
			return (1);
	return (0);
}
/**
 * _atoi - converts a string of ascii digits to the values they represent
 * @s: pointer to the source string
 * Return: the digits value
 */
int _atoi(char *s)
{
	int k, r;

	k = r = 0;
	while (s[k])
	{
		if (s[k] >= '0' && s[k] <= '9')
		{
			r *= 10;
			r += (s[k] - '0');
		}
		k++;
	}
	return (r);
}
/**
 * main - The main function
 * @argc: The argument counter
 * @argv: 2D array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int k;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (k = 1; k < argc; k++)
	{
		if (_isdigit(argv[k]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
