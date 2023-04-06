#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - return lenth of string
 *
 * @s: string to be checked
 *
 * Return: always 0
 */

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}

}
