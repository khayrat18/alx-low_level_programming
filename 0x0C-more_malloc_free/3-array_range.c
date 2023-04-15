#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *str;
	int j;
	int size;

	if (max < min)
	return (NULL);

	size = max - min + 1;
	str = malloc(sizeof(int) * size);
	if (str == NULL)
	return (NULL);
	for (j = 0; min <= max; j++)
		str[j] = min++;
	return (str);
}

