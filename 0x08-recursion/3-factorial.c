#include "main.h"

/**
 * factorial - returns  a factorial number
 *
 * @n: number to be checked
 *
 * Return: return 1, otherwise -1
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
