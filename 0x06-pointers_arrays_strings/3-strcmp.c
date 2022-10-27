#include "main.h"
/**
 * _strcmp - comparing two strings
 * @s1: First input String
 * @s2: Second input string
 *
 * Return: b if different and 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int m = 0;

	while ((s1[m] == s2[m]) && s1[m] != '\0')
	{
		m++;
	}
	return (s1[m] - s2[m]);
}
