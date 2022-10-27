#include <stdio.h>

/**
 * print_buffer - Print the entire bufer
 * @b: The buffer to print
 * @size: The buffer size
 */
void print_buffer(char *b, int size)
{
	int i, k,

	i = 0;
	if (size <= 0)
		putchar('\n');
	else
	{
		while (i < size)
		{
			printf("%08x: ", i);
			k = 0;
			while (k < 10)
			{
				if (k % 2 == 0 && k > 0)
					printf(" ");
				if (k + i > size - 1)
					printf(" ");
				else
					printf("%.2x", b[k + i]);
				k++;
			}
			putchar(' ');
			k = 0;
			while (k < 10)
			{
				if (k + i > size - 1)
					break;
				if (b[k + i] >= ' ' && b[k + i] <= '~')
					putchar(b[k + i]);
				else
					putchar('.');
				k++;
			}
			putchar('\n');
			i += 10;
		}
	}
}
