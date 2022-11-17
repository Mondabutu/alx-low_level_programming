#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: pointer parameters
 * @n: parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;
	char *s;

	va_start(valist, n);

	for (k = 0; k < n; k++)
	{
		s = va_arg(valist, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (k < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
