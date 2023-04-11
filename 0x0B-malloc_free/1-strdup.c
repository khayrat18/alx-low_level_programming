#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup -  returns a pointer to a newly allocated space
 *
 * @str: string to be checked
 *
 * Return: return pointer, otherwise NULL
 */

char *_strdup(char *str)
{
	char *ptr;

	ptr = ((char *)malloc(strlen(str)+1 * sizeof(char)+ 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
