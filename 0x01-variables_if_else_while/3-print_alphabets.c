/**
 *Printing alphabet in lowercase then in uppercase using putchar
 *function
 *main function int main initialize the excution of theprogram
 * return zero to seccess
 */
#include <stdio.h>

/*main function int main*/
int main(void)
{
/*variable declaration char letters*/
	char letters;
/*for statement for lowercase alphabet*/
	for (letters = 'a'; letters <= 'z'; letters++)
	putchar (letters);
/*for statement for uppercase alphabet*/
	for (letters = 'A'; letters <= 'Z'; letters++)
	putchar (letters);
	putchar ('\n');
	return 0;
}
