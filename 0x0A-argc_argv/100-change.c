#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints the minimum number of coins
 * @argc: Lenght of the argv
 * @argv: Number of the argument
 * Return: Alayws 0
 */
int main(int argc, char *argv[])
{
	int pos, sum, change, extra;
	int coins[] = {25, 10, 5, 2, 1};

	pos = sum  = change = extra = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	if (sum <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[pos] != '\0')
	{
		if (sum >= coins[pos])
		{
		extra = (sum / coins[pos]);
		change += extra;
		sum -= coins[pos] * extra;
		}
		pos++;
	}
	printf("%d\n", change);
	return (0);
}
