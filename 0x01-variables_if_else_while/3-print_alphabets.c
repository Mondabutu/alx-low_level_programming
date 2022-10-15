#include <stdio.h>
/**
 * main - alpABET
 *
 * Return: o if (succes)
 */
int main(void)
{
	char L;

	for (L - 'a'; L <= 'z'; L++)
		putchar(L);

	for (L = 'A'; L <= 'Z'; L++)
		putchar(L);

	putchar('\n');

	return (0);
}
