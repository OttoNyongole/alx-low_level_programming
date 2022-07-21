#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to find the bit of
 * @index: index, starting from 0 of the bit you want to get
 *
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
