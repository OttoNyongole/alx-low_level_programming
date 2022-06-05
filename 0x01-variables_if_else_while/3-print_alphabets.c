/**
 *Printing alphabet in lowercase then in uppercase using putchar
 *function
 */
#include <stdio.h>

/*main function int main*/
int main ()
{
	char letters;
	
	for (letters='a'; letters<='z'; letters++)
	putchar (letters);
	putchar ('\n');

	for (letters='A'; letters<='Z'; letters++)
	putchar (letters);
	putchar ('\n');

}
