#include "lists.h"
/**
 * before_main - function prins string before excuting the main fun
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
