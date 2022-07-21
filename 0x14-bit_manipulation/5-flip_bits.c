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
	int i = 0;
	int counter = 0;

	while (i < 64)
	{
		if ((n & 1) != (m & 1))
			counter++;
			m = m >> 1;
			n = n >> 1;
			i++;
	}
	return (counter);
}
