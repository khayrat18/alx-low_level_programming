#include "main.h"
/**
 * print_alphabet - print all alphabets in lower case
 *
 * Return Always 0
 */
void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
print_alphabet();
return (0);
}
