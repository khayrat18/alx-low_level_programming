#include"main.h"
#include <math.h>

/**
 * _sqrt_recursion -  returns the natural square root of n
 *
 * @n: number to be checked
 *
 * return: always 1, otherwise 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
{
return (1);
}
else if (n < 0)
{

return (-1);
}
return (n * _sqrt_recursion(n - 1));




}
