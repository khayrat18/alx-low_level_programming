#include "main.h"
#include <string.h>


/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be checked
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
int l, i;
char *begin_ptr, *end_ptr, temp;

l = strlen(s);

begin_ptr = s;
end_ptr = s;

for (i = 0; i < l - 1; i++)
	end_ptr++;

for (i = 0; i < l / 2; i++)
{
temp = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = temp;

begin_ptr++;
end_ptr--;
}
_putchar('\n');

}

