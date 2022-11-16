#include <studio.h>
#include "function_pointers.h"

/**
 * print_name -Function that print names passed to it
 * @name: character to display to the stdout
 * @f: A pointer function
 * Return: No return
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;
	f(name);
}
