#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *create_array - creatses an array of chars
 *
 * @size: character to be checked
 * @c: character to be checked
 *
 * Return: return pointer, otherwise null
 */


char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size * sizeof(char)));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{

	s[i] = c;
	i++;
	}

	s[i] = '\0';
	return (s);



}
