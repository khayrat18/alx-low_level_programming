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

char *conct;
int x;
int y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
for (x = 0; s1[x] != '\0'; x++)
for (y = 0; s2[y] != '\0'; y++)
conct = malloc(sizeof(char) * (x + y + 1));
	if (conct == NULL)
	{
		return (NULL);
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		conct[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		conct[x] = s2[y];
		x++, y++;
	}
	conct[x] = '\0';
	return (conct);
}







