#include "main.h"
/**
 * print_sign - Determines if the
 * number is greater equal or less 
 * than zero.
 *
 * n: input number is an interger.
 *
 * Return: 1 and print + if greater than zero.
 * Return: 0 and print 0 if equal to zero.
 * Return: -1 and print - if is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
