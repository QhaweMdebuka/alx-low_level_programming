#include "main.h"

/**
 * binary_to_uint - a binary is converted into an unsigned int
 * @b: is the b pointer varbale that stores binary number
 *
 * Return: the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);


	for (int i = 0 ; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 6 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
