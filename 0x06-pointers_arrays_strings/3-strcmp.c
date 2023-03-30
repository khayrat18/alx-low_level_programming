#include "main.h"
#include <string.h>
/**
 *_strcmp  - function that compares two strings
 *
 *@s1: string t compare with
 *@s2: string to join with first string
 *
 * Return: return 0
 */

int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])

return (s1[i] - s2[i]);

i++;
}
return (0);

}
