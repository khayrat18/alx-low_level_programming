#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: list of arguments to be passed
 *
 * Return: return nothing
 */


void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	char *spr = "";
	int i = 0;

	va_start(ap, format);

	if (format)
	{
	while (format[i])
	{
	switch (format[i])
	{
		case 'c':
		printf("%s%c", spr, va_arg(ap, int));
		break;
		case 'i':
		printf("%s%d", spr, va_arg(ap, int));
		break;
		case 'f':
		printf("%s%f", spr, va_arg(ap, double));
		break;
		case 's':
		str = va_arg(ap, char *);
		if (!str)
		str = "(nil)";
		printf("%s%s", spr, str);
		break;
		default:
		i++;
		continue;
	}
	spr = ", ";
	i++;
	}

	}
	va_end(ap);
	printf("\n");
}
