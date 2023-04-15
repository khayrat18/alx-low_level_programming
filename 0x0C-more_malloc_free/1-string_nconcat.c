#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1: string to be checked
 * @s2: string to be checked
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: return pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *conct;
unsigned int len1;
unsigned int len2;



	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
		len2 = n;
	conct = malloc(len1 + len2 + 1 * sizeof(char));
	if (conct == NULL)
	{
		return (NULL);
	}
	memcpy(conct, s1, len1);
	memcpy(conct + len1, s2, len2);
	conct[len1 + len2] = '\0';
		return (conct);
}
