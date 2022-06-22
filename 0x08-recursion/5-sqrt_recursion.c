#include "main.h"
/**
 * _sqrt_recursion - function to  print the natural square root of a number
 * @n: is the number
 * Return: int number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
{

/**
 * _sqrt - _sqrt_recursion function
 * @n: int number
 * @j: int number
 */
int _sqrt(int n, int j)
{
	if (n < 0)
	{
		return (-1);
	}
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	return (_sqrt(n, j+ 1));
}
