#include <stdio.h>
/**
 * my_function - function that prints before main executes
 *
 * Return: returns nothing
 */

__attribute__((constructor))void my_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
