#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of bit you need to flip to get from one number to another
 * @n: number to be flipped
 * @m: number to get to
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}
	return (bits);
}
