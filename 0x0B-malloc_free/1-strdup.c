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
	int i;

	ptr = ((char *)malloc(strlen(str) * sizeof(char) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;

	strcpy(ptr, str);
	return (ptr);
}
