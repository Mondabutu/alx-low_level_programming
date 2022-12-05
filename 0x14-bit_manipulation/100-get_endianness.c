#include "main.h"
/**
 *get_endianness -  checks foe endianness
 *Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *a = (char *)&k;

	if (*a)
		return (1);
	else
		return (0);
}