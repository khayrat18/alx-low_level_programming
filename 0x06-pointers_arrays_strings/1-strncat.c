#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings
 *
 *@dest: string to join with
 *@src: string to join with first string
 *@n: maxim number of characters to be appended
 *
 * Return: Return dest
 */

char *_strncat(char *dest, char *src, int n)
{

strncat(dest, src, n);
return (dest);

}
