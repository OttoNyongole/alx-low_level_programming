#include "main.h"

/**
 * main - int _islower(int c) checking for lowercase character.
 *
 * Return. 1 for lowercase.
 * Return: 0 otherwise.
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
