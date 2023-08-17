#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers.
 * @n: the number of integers.
 * @separator: is the string to be printed between numbers.
 * Return: the result of the addition.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator != NULL && n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(args);
}
