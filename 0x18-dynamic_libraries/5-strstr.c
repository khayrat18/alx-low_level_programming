#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string to be checked
 * @needle: substring to be checked
 *
 * Return: return substring, otherwise null
 *
 */

char *_strstr(char *haystack, char *needle)
{
char *n;
n = strstr(haystack, needle);
if (n != 0)
{
return (n);
}
else
return (NULL);
}
