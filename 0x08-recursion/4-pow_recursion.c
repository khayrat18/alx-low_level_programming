#include "main.h"
#include <math.h>

/**
 *
 * _pow_recursion - returns value of x and y
 *
 * @x: number to be checked
 * @y: number to be checked
 *
 * Return: return 1, otherwise o
 *
 */


int _pow_recursion(int x, int y)
{

if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}

return (x*_pow_recursion(x, y -1));



}
