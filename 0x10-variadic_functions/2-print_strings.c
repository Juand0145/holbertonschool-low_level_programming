#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the separator
 * @n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			str = "(str)";

		if (i != n - 1 && separator)
			printf("%s%s", str, separator);

		else
			printf("%s", str);
	}

	printf("\n");

	va_end(list);
}
