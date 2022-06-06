/**
 * c program to print combination numbers
 *
 */

/**
 * main - printing all possible combination of two two-digit numbers,
 * ranging from 0-99, separated by a , folloewd by a space
 *
 * Return: Always 0.
 */

int main(void)
{

	int i, j; 

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % +10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((i % 10) + '0');
			if (i == 98 && j == 99)
				continue;
			putchar(',');
			putchar(' ');
		}

	}
	putchar(' ');
	return (0);
}
