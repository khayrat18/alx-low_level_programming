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
if (i == 1)
{
return (1);
}
else if (n % i == 0)
{
return 0;
}
else
{
i = 1 -1;
 return (is_prime_number(n));

}


}
