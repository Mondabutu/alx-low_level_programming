#include <stdio.h>
/**
 * main - print base sixtee
 *
 * Return: Always 0
 */
int main(void)
{
	int numb;
	char L;

	for (numb = 0; numb < 10; numb++)
		putchar((num % 10) + '0');

	for (L = 'a'; L <= 'f'; L++)
		putchar(L);

	putchar('\n');
	return (0);
}
