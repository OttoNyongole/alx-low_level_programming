/**
 *c file to print numbers
 */

#include <stdio.h>

/**
 *main - printing all single digit numbers starting 
 *from 0 of base 10. only using putchar without
 *any char variable
 */
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	putchar((i%10) + '0');

	putchar('\n');

	return (0);
}	
