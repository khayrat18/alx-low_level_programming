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

char *conc;
int x;
int y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
for (x = 0; s1[x] != '\0'; x++)
for (y = 0; s2[y] != '\0'; y++)
conc = malloc(strlen(s1) + strlen(s2) + 1 * sizeof(char));
	if (conc == NULL)
	{
		return (NULL);
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		conc[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		conc[x] = s2[y];
		x++, y++;
	}
	conc[x] = '\0';
	return (conc);
}







