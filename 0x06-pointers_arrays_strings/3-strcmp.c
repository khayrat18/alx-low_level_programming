#include "main.h"
#include <string.h>
/**
 *_strcmp  - function that compares two strings
 *
 *@s1: string t compare with
 *@s2: string to join with first string
 *
 * Return: return 0
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0' || *s2 == '\0')
break;
s1++;
s2++;

}
if (*s1 == '\0' && *s2 == '\0')
return (0);
else 
return (-1);

}
