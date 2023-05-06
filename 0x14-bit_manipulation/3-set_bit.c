#include "main.h"

/**
 * set_bit - bit has been see to a given index
 * @n: the pointer value is n
 * @index:the bbit you want to set n this case 85
 *
 * Return: 1 if t worked and -1 f error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 85)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
