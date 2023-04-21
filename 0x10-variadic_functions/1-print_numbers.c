#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: return nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	num = va_arg(ap, unsigned int);
	printf("%d", num);
	if (separator != NULL && i < n + 1)
		{
	printf("%s", separator);
		}
	else
	{
		return;
	}
	}
	va_end(ap);
	printf("\n");

}
