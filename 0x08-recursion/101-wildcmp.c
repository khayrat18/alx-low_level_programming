#include "main.h"
#include <string.h>


/**
 * wildcmp - compares two string
 *
 * @s1: string to be checked
 * @s2: string to be checked
 *
 * Return: return 1, otherwise 0
 */


int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}



