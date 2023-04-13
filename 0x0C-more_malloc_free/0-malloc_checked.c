#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -  a function that allocates memory
 *
 * @b: int to be checked
 *
 * Return: pointer to be allocated
 */


void *malloc_checked(unsigned int b)
{

void *ptr;

ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}



