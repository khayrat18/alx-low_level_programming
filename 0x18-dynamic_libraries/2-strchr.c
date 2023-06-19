#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string character to be checked
 * @c: string charactervto be checked
 *
 * Return: Return s, otherwise Null
 */

char *_strchr(char *s, char c)
{
	char *z;

	z = strchr(s, c);

	if (z != 0)
	{
		return (z);

	}
	else
		return (NULL);
	_putchar('\n');
}


