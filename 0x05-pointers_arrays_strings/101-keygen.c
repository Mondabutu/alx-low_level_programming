#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates  valid random password
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int password[120];
	int k, sum, n;

	sum = 0;

	srand(time(NULL));

	for (k = 0; k < 120; k++)
	{
		pass[k] = rand() % 78;
		sum += (pass[k] + '0');
		putchar(pass[k] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
