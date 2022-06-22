#include "main.h"
/**
 * _puts_recursion - this function print a string
 * @s: A string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
