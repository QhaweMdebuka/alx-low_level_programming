#include "function_pointers.h"
/**
 * int_index - functon searches for an interger
 * @array: array
 * @size: size of elents in function
 * @cmp: checks which element satisfies the condtion
 * Return: no element satifies the condition
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL  !size <= 0  !cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
