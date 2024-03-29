#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: input
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
