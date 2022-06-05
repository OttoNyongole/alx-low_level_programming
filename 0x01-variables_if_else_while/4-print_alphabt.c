/**
 * To print alphabe in lowercase excluding e and q
 * using a putchar statement only
 */
#include <stdio.h>

/**
 * Mian function to initialize the excution of the program
 *Using putchar statement we are going to print lowercase alphabet excluding eand q
 *Return is zero
 */
int main (void)
{
	char letters;
/*for loop with if statement*/
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters !='e' && letters !='q')
			putchar (letters);
	}
	putchar ('\n');
	return (0);
}
