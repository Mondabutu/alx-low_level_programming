#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: the string to encode
 *
 * Return: the encode string
 */
char *rot13(char *s)
{
	char i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rt[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j]);
			{
				s[i] = rt[j];
				break;
			}
			j++;
		}
		i++
	}
	return (s)
}					
