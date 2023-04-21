#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -is the  function prototype name
 * @name: is the pointer named under the arg of print name
 * @f: is a ponter to a function name
 * Return: nothing is specified , hence is nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL !f == NULL)
		return;
	f(name);
}
