#include "main.h"

/**
 * main - print _putchar as the message.
 *
 * Return: 0 
 */
int main(void)
{
	int str[] = {10, 15, 20, 25, 22, 27, 30};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
