#include "main.h"

/**
 * get_bit - returns the bit into an index number
 * @n: the number to be prnted
 * @index: locates frst occurence under an unsgigned int
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 78)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
