#include "main.h"

/**
 * clear_bit - sets the wvalue of gven index to sero
 * @n:vakue used to point int
 * @index: is the selected bit which n thsi case is 53
 * Return:1 if its a success and -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
