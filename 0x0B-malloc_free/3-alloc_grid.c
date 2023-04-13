#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2D array of integers
 *
 * @width: array to be checked
 * @height: array to be checked
 *
 * Return: null on failure
 */



int **alloc_grid(int width, int height)
{
int **ptr;
int i;
int r;


ptr = malloc(sizeof(int *) * height);
if (width <= 0 || height <= 0)

return (NULL);

if (ptr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
ptr[i] = malloc(sizeof(int) * width);
if (ptr[i] == NULL)

{
for (; i >= 0; i--)
free(ptr[i]);
free(ptr);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (r = 0; r <  width; r++)
ptr[i][r] = 0;
}
return (ptr);
}
