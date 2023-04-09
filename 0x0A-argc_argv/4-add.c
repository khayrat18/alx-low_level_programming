#include <stdio.h>
#include "main.h"

/**
 * main - adds two positive integers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 */

int main(int argc, char *argv[])
{

if(argc == 0)
{
printf("0\n");
}

int i;
for(i = 0; i < argc; i++)
{	
	printf("Error\n");
return (1);
}



int a;
int b;
int sum;
a = _atoi(argv[1]);
b = _atoi(argv[2]);
sum = a + b;
printf("%d\n", a,b,sum);

return (0);
}
