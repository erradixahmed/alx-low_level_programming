#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *s, *sep = "";

	while (format && format[i])
	{
		i++;
	}

	va_start(args, format);

	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s%s", sep, s);
				break;
			default:
				break;
		}

		sep = ", ";
		j++;
	}

	printf("\n");
	va_end(args);
}