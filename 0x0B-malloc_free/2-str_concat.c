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
	x = y = 0;
while (s1[x] != '\0')
x++;
while (s2[y] != '\0')
y++;

conct = malloc(strlen(s1) + strlen(s2) + 1 * sizeof(char));
	if (conct == NULL)
	{
		return (NULL);
	}
	strcat(conct, s1);
	strcat(conct, s2);
	return (conct);
}







