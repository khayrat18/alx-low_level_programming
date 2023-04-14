#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1: string to be checked
 * @s2: string to be checked
 *
 * Return: return pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *conct;
unsigned int k;

	if (n >= strlen(s2))
		n = strlen(s2);

conct = malloc(strlen(s1) + strlen(s2) + 1 * sizeof(char));
	if (conct == NULL)
	{
		return (NULL);
	}
	
	for (k = 0; k < strlen(s1); k++)
		conct[k] = s1[k];
	for (k = 0; k < strlen(s2); k++)
		conct[k + strlen(s1)] = s2[k];
	conct[strlen(s1) + strlen(s2)] = '\0';
			return (conct);
}
