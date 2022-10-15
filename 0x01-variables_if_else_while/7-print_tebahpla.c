#include <stdio.h>
/**
 * main - print lower case alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char L;

	for (L = 'z'; L >= 'a'; L--)
		putchar(L);
	putchar('\n');
	return (0);
}
