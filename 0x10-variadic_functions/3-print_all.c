#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print strings.
 * @format: is the list  of type of arguments.
 * Return: anything.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *s;

	va_start(list, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			s = va_arg(list, char*);
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0' && format)
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
