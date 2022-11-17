#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: parameters
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int p = 0, j, k = 0;
	char *s;
	const char t_arg[] = "cifs";

	va_list(valist, format);
	while (format && format[p])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[p] == t_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[p])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), k = 1;
				break;
			case 's':
				s = va_arg(valist, char *), k = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		} p++;
	}
	printf("\n"), va_end(valist);
}

