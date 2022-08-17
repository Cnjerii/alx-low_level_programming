#include <stdio.h>
#define UNUSED(X) (void)(X)

/**
 * main - main function
 * @argc: arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
