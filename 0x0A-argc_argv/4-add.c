#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



/**
 * check_digit - check if string is a digit
 * @str: string to be checked
 *
 * Return: always 0
 */

int check_digit(char *str)
{
int i;


for (i = 0; str[i] != '\0'; i++)
{
if (isdigit(str[i]) == 0)
return (0);
}
return (1);


}

/**
 * main - adds two positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])

{

int i;
int str_to_digit;
int sum = 0;

i = 1;
while (i < argc)
{
if (check_digit(argv[i]))

{
str_to_digit = atoi(argv[i]);
sum += str_to_digit;
}
else
{
printf("Error\n");
return (1);
}

i++;
}

printf("%d\n", sum);

return (0);
}
