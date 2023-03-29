#include "main.h"
#include <string.h>
/**
 * _strncpy - function that concatenates two strings
 *
 *@dest: the string where we want to append
 *@src: the string from whic 'n' characters are going to append
 *@n: maximum number of characters to be copied
 * Return: Return dest
 */


char *_strncpy(char *dest, char *src, int n)
{

strncpy(dest, src, n);
return (dest);

}
