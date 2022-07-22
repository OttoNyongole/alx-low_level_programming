#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number to flip
 * @m: number to get to
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int c = 0;

	while (xor)
	{
		c += xor & 1;
		xor = xor >> 1;
	}

	return (c);
}
