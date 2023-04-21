#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - defines the functon
 * @array: is one one of the arguments in the array
 * @size: this specifies the number of elements that can be printed
 * @action: a functon pointing to a function that has an int value
 * Return: no value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL  !action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
