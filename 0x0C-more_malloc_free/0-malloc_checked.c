#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  a function that allocates memory
 *
 * @b: amount of bytes to allocate
 *
 * Return: return pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}

