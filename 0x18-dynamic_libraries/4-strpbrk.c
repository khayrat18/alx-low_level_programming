#include "main.h"
#include <string.h>

/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 *
 * @s: string to be checked
 * @accept: string to be checked
 *
 * Return: return s, otherwise null
 */



char *_strpbrk(char *s, char *accept)
{
	char *r;

	r = strpbrk(s, accept);
	if (r != 0)
	{
		return (r);
	}
	else
		return (NULL);
}

