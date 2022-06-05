/**
 * c file printing combination of dought digit
 *
 */

#include <stdio.h>

/**
 * main - a program that prints all possible 
 * different combinations of two digits
 *
 * Return:Always zero
 */

int main(void)
{
	int i, j;
for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
		putchar((i % 10) + '0');
		putchar((j % 10) + '0');
		if (i == 9 && j == 9)
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	
	putchar('\n');
return (0);
}
