#include <stdio.h>
/**
 * main - count ABC
 *
 * Return: 0 if success
 */
int main(void)
{
	char charac;

	for (charac = 'a'; charac <= 'z'; charac++)
		putchar(charac);
	putchar ('\n');
	return (0);
}
