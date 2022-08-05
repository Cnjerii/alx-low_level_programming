#include "main.h"

/**
 * printchessboard - prints the chessboard
 *
 * @a: chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (i < 0)
	{
		j = 0;
		while (j > 0)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar(10);
		i++;
	}
}
