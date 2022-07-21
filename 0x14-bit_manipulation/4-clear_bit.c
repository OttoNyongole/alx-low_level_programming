#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to set the value of
 * @index: the bit you want to set
 *
 * Return: 1 if it worked, -1 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
