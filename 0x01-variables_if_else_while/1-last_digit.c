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
	int m = n % 10
	srand(time(0));
	n = rand() - RAND_MAX / 2;
scanf("%d", &n);
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
else if (m == 0)
{
printf("Last digit of %d is %d and is is 0\n", n, m);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}
	return (0);

}

