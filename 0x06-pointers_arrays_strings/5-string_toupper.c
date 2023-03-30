#include "main.h"
#include <string.h>
/**
 * string_toupper  - function that changes a string to uppercase
 * @a: string to be changed
 *Return: return n
 */
char *string_toupper(char *a)
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] >= 'a' && a[i] <= 'z')
a[i] = a[1] - 32;
}
return (a);
}
