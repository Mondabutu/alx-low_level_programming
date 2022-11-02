#include "main.h"
/**
 * palindromeCheck - checks the string
 * @strg: The string to be checked
 * @l: the lenght of the string
 * @k: the incrementing parameter
 * Return:0 if it's not a palindrome, 1 if it is
 */
int palindromeCheck(char *strg, int l, int k)
{
	if (k < l && strg[k] == strg[l])
		return (palindromeCheck(strg, l - 1, k + 1));
	if (strg[k] != strg[l])
		return (0);
	return (1);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string
 * Return: displays the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: The string to check
 * Return: 2 if it's not a palindrome, 1 if it is
 */
int is_palindrome(char *s)
{
	int k = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeCheck(s, length, k));
}

