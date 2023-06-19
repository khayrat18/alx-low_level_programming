
/**
 * add -function to add two numbers
 * @a: number to be checked
 * @b: number to be checked
 * Return: return sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function to subtract two numbers
 * @a:  number to be checked
 * @b: number to be checked
 * Return: return difference
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function to multiplies two numbers
 * @a:  number to be checked
 * @b: number to be checked
 * Return: return product
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function to divide two numbers
 * @a:  number to be checked
 * @b: number to be checked
 * Return: return quotient
 */

int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	else
	{
		return (a / b);
	}
}

/**
 * mod - function to that return remainder of two numbers
 * @a:  number to be checked
 * @b: number to be checked
 * Return: return remainder
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	else
	{
		return (a % b);
	}
}
