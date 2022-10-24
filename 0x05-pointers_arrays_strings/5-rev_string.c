#include "main.h"

/**
 * rev_string - function that reverse a string
 *
 * @s: the string
 *
 * Return: the string
 */
void rev_string(char *s)
{
	int m;
	int n;
	int t;
	int l;

	while (s[m] != 0)
	{
		m++;
	}
	l = m;
	m = 0;
	n = l - 1;

	while (m < n)
	{
		t = s[m];
		s[m] = s[n];
		s[n] = t;
		m++;
		n--;
	}
}
