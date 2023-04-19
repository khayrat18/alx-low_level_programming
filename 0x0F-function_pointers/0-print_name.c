#include "function_pointers.h"
#include <string.h>
/**
 *  print_name - function that prints name
 *
 *  @name: string to be checked
 *  @f: function pointer
 *
 *  Return: return nothing
 */


void print_name(char *name, void (*f)(char *))
{
		if (name == NULL || f == NULL)
			return;
		(*f)(name);
}

