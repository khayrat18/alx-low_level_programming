#include <stdio.h>
/**
 * main - main entry
 *
 * Return: Always 0
 */
int main(void)
{
int i;
char ch;
for (i = 0; i < 10; i++)
putchar(i + 'o');
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');


return (0);
}

