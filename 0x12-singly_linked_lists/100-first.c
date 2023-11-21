#include "lists.h"
void FirstPlace(void)__attribute__ ((constructor));
/**
 * FirstPlace - runs before main function
 */
void FirstPlace(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
