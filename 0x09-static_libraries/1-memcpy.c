#include "main.h"
#include <string.h>

/**
 * _memcpy -  function that copies memory area
 *
 * @dest: to  memory area
 * @src: from memory area
 * @n: number of bytes
 *
 * Return: resturn to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);

return (dest);

}
