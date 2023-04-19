#include "function_pointers.h"
/**
 * print_name - the main
 * @name: char
 * @f: pointer fun
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
