#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: name param
 * @f: func param
 * Rteurn: void, nada
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
