#include "main.h"

/**
 * main - printing alphabets 10 times.
 *
 * Return: Always 0.
 *
 */

/*function to print alphabets 10 times*/
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}

}
