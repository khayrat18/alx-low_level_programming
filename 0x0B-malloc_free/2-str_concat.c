#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - a function that concatenates two strings
 *
 * @s1: string to be checked
 * @s2: string to be checked
 *
 * Return: pointer, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{

char *s;
int x;
int y;

s = malloc(strlen(s1) + strlen(s2) + 1 * sizeof(char));
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
	for (y = 0; s2[y] != '\0'; y++)
	if (s == NULL)
	{
		return (NULL);
	}
	strcat(s, s1);
	strcat(s, s2);
	return (s);
}







