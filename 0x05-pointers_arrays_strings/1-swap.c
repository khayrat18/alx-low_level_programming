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
int temp;
temp = *a;
*a = *b;
*b = temp;
}
