#include "main.h"

/**
 * main - print alphabets in lowercase using _putchar.
 *
 * Return: Always 0.
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i<= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
