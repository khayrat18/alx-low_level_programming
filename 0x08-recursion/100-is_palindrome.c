#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if string is a palindrome
 *
 * @s: stringto be checked
 *
 * Return: return 1' otherwise 0
 */



int is_palindrome(char *s)
{

int i, z;
i = 0;
z = 0;

if (NULL == s || i >= z)
{
return (1);
}

if (s[i] != s[z])
{
	return (0);
}
return (0);
}


