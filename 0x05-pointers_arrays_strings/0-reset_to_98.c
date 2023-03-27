#include "main.h"


/**
 * reset_to_98 -  a function that takes a pointer to an int
 *
 * @n: character to  be checked
 */
void reset_to_98(int *n)
{
int *p;

*n = 402;
p = &*n;
*p = 98;
}
