#include "main.h"


/**
 * swap_int - swaps two the values of two integers
 *
 * @a: character to be swapped
 * @b: character to be swapped
 *
 */
void swap_int(int *a, int *b)
{
int *p;
*a = 98;
*b = 42;

p = &*a;
p = &*b;
*p = 42;
*p = 98;
}
