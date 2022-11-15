#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - This program prints the name of the file it was compiled from, followed by a new line
 * Description: this program prints the name of the file it was compiled from
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
