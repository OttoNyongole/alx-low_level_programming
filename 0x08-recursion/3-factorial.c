#include "main.h"
/**
 * factorial(int n) - print the factorial of the number n.
 * @n : The number
 * Return: -1 if n is less than 0
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
