#include <stdio.h>
/**
 * main - Main entry
 *
 * Return: Always 0
*/
int main(void)
{
char ch = 'a';
char i = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');

return (0);
}

