/**
 * c file printing alphabet in reverse
 */

#include <stdio.h>

/**
 * main -program to print lowercase alphabet
 * in reverse
 *
 * Return: always zero
 */
int main(void)

{
	
/*Variable declaration*/
	char letters;

/*For loop*/
	for (letters = 'z'; letters <= 'a'; letters--)
	putchar(letters);
	putchar('\n');

	return (0);
}	
