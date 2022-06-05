/**
 *Printing alphabet in lowercase then in uppercase using putchar
 *function
 */
#include <stdio.h>

/*main function int main*/
void main ()
{
/*variable declaration char letters*/
	char letters;
/*for statement for lowercase alphabet*/
	for (letters = 'a'; letters <= 'z'; letters++)
	putchar (letters);
	putchar ('\n');
/*for statement for uppercase alphabet*/
	for (letters = 'A'; letters <= 'Z'; letters++)
	putchar (letters);
	putchar ('\n');

}
