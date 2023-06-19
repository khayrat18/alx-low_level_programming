#include "main.h"
#include <string.h>


/**
 * _strlen  - checks for length of a string
 *
 * @s: string to be checked
 *
 * Return: Always 0
 */

int _strlen(char *s)
{

	int ctr = 0;

	while (*s != '\0')
	{
		ctr++;
		s++;

	}
	return (ctr);

}

