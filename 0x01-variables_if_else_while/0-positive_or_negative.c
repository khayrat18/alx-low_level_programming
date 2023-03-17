#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Main Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%lf is positive\n");
}
else if
(n == 0)
{
printf("%lf is zero\n");
}
else
{
	printf("%lf is negative\n");
}
	return (0);
}
