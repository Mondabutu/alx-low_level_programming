#include "main.h"
#define NULL 0

/**
 * _strchr -  Locate 1st char occurance in string and return pointer
 * @s: String to search
 * @c: Target character
 * Return: pointer to the charater in string
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	while (s[k] != '\0' && s[k] != c)
		k++;
	if (s[k] == c)
		return (&s[k]);
	else
		return (NULL);
