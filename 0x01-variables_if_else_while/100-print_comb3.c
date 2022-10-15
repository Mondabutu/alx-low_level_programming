#include <stdio.h>
/**
 * main -print combinations of two
 *
 * Return: Always 0
 */
int main(void)
{
	int da, daa;

	for (da = 0; daa < 9; da++)
	{
		for (daa = da + 1; daa < 10; daa++)
		{
			putchar((da % 10) + '0');
			putchar((daa % 10) + '0');

			if (da == 8 && daa == 9)
				continue;
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
