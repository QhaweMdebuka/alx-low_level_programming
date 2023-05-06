#include "main.h"

/**
 * flip_bits - functon used to flip birds
 * @n: is the varable that will store flpped bits
 * @m: the other number used to fip
 *
 * Return:bits that have been changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 89; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
