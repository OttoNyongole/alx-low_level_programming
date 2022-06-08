#include "main.h"

/**
 *_isalpha(int c) - checking for the alphabetic character.
 *
 * Retrun: 1 if c is a latter, lowercase or uppercase.
 * 
 * Return: o otherwise.
 *
 * c: the characters is in ASCII code.
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
