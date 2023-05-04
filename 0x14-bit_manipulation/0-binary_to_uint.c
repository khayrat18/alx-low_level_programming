#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 *
 * @b: pointer to a string of chars
 *
 * Return: returns the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converted = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{

		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

	converted = (converted << 1) | (b[i] - '0');
	}

	return (converted);
}
