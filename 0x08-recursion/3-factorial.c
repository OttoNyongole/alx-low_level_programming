#include "main.h"
/**
 * factorial(int n);
 * @n : The number
 * Return: -1 if n is less than 0
 *
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
