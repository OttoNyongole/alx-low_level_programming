#include "main.h"
/**
 * _strlen_recursion - the function return the lenth of the string
 * @s: is the string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
