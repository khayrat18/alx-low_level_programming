#include "main.h"
#include <string.h>

/**
 * _strspn -  function that gets the length of a prefix substring
 *
 * @s: string to be checked
 * @accept: string to be checked
 *
 * Return: return s
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;

	x = 0;
	x = strspn(s, accept);
	return (x);

}

