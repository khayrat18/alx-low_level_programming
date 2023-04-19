#include "function_pointers.h"
#include <string.h>



/**
 * array_iterator -  parameter on each element of an array
 *
 * @action: pointer to function
 * @size: size of array
 * @array: array to be checked
 *
 * Return: return nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
