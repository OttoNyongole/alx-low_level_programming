#include "lists.h"
/**
 * Before - marks printf to execute before main
 */
void Before(void) __attribute__ ((constructor));
void Before(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
