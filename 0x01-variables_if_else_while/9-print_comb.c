/**
 * c file printing possible combination
 *
 */

#include <stdio.h>

/**
 * main - print all possible combination
 *of single digit using putchar
 *
 * return:Always zero
 *
 */

int main(void)
{
	int i;

	for (i = 0; i <=9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(';');
		putchar(' ');
	}
	putchar('\n');
	
	return (0);
}
