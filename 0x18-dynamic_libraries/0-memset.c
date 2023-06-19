#include "main.h"
#include <string.h>

/**
 * _memset - function that fillsfirst number bytes of memory
 *
 * @s: character that points memory area
 * @b: constant byte
 * @n: first number of bytes
 *
 * Return: return s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{

	memset(s, b, n);

	return (s);
}

