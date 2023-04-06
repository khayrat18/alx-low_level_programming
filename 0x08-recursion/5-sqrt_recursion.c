#include"main.h"
#include <math.h>


/** get_sqrt - functions to mathematically determine the square root
 *
 * @val: whose root is to be found;
 *
 * @rt: root variable from _sqrt_recursive function
 *
 * Return: the natural square root, otherwiise -1
 */

int get_sqrt(int val, int rt)
{
	
	if ((rt * rt) == val)
		return (rt);

	if (rt == val / 2)
		return (-1);

	return (get_sqrt(val, rt + 1));
}


/**
 * _sqrt_recursion -  returns the natural square root of n
 *
 * @n: number to be checked
 *
 * return: always 1, otherwise 0
 */

int _sqrt_recursion(int n)
{
int rt;
rt = 0;
	
if (n == 1)
{
return (1);
}
else if (n < 0)
{

return (-1);
}
return (get_sqrt(n, rt));




}
