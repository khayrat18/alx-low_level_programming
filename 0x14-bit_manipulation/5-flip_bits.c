#include "main.h"
/**
 * flip_bits - returns number of bits flipped from two numbers
 *
 * @n: number to be checked
 * @m: number to be checked
 *
 * Return: returns number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int count = 0;

	flip = n ^ m;

	while (flip)
	{
		count += flip & 1;
		flip >>= 1;
	}

	return (count);


}
