#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, j, k, l;

	i = 1;
	j = 2;
	k = l = 0;
	while (k <= 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if ((i % 2) == 0)
		{
			l += i;
		}
	}
	printf("%ld\n", l);
	return (0);
}
