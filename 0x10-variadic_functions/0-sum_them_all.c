#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of all args.
 *@n: the number of args.
 * Return: the result of the addition.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
