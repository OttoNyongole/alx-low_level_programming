#include "main.h"
/**
* _isdigit - function that check if it's a digit
* @c: checks the digit
* Return: 1 if c is a digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
