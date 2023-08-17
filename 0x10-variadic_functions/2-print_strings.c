#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings.
 * @n: the number of strings.
 * @separator: is the string to be printed between numbers.
 * Return: the result of the addition.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (!*s)
		{
			printf("(nil)");
		}

		printf("%s", s);

		if (i < n - 1  && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
