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
while (*s != '\0')
if (*s == c)
{
return (s);
}
s++;
if (c == '\0')
{

return (s);

}


return (NULL);

}
