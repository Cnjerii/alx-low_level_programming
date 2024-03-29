#include "main.h"

/**
 * _strlen_recursion - length of as tring
 *
 * @s: string
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s == '\0')
		return (0);

	a = 1 + _strlen_recursion(++s);

	return (a);
}
