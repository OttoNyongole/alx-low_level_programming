#include "main.h"
/**
 * _sqrt_recursion - function to  print the natural square root of a number
 * @n: is the number
 * Return: -1 if n doesnt have natural sqrt
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

