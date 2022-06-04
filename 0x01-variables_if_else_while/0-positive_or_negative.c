#include <stdlib.h>
#include <time.h>
/* program to print positive and negative number rondomly*/

/*Initialization of the function main*/
int main (void)
{
		int n;

			srand(time(0));
			n = rand() - RAND_MAX / 2;
			if (n<0; n++)
			{
			printf("The value of n is negative: %d\n", n);
			else if (n>0)
			{
			printf("The value of n is positive: %d\n",n);
			}
			else {
			printf("The value of n is zero %d\n",n);
			}
			}
		return (0);
}
