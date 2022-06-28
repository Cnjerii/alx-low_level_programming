#include <stdio.h>
/**
 *main - entry point
 *
 * Return: Always 0(success/correct)
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);

			if (x == '8' && y == '9')
				;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}

