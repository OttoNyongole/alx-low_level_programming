/**
 * c file to print Hexadecimal
 */
#include <stdio.h>

/**
 * main a program that prints all the 
 * numbers of base 16 in lowercase, followed by a new line.
 * Return: always zero
 */

int main(void)
{
	int i;
	char letters;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
