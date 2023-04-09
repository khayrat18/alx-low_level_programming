#include <stdio.h>
#include "main.h"


/**
 * _atoi - changes string to integer
 *
 * @s: string to be checked
 *
 * Return: the int converted to string
 */


int _atoi(char *s)
{
int i;
int res;
res = 0;

for (i = 0; s[i] != '\0'; i++)
res = res * 10 + s[i] - '0';

return (res);
}



/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0, otherwise 1
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}



