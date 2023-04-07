#include "main.h"
#include <stdbool.h>

/**
 * is_prime_number - check if n is prime number
 *
 * @n: number to be checked
 *
 * Return: return 1, 0thewise o
 */

int is_prime_number(int n)
{
int i;
i = 0;


if (n < 2)
{
	return (0);
}
for (i = 2; i <= n / 2; i++)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}


