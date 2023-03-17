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
scanf("%d", &n);
if (n > 0)
{
printf("%d is positive\n");
}
else if
(n == 0)
{
printf("%d is zero\n");
}
else
{
	printf("%lf is negative\n");
}
	return (0);
}
