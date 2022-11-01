#include "main.h"
/**
 * print_chessboard - print chessboard using the given set 2D array
 * @a: 2D array
 */
void print_chessboard(char (*a)[8])
{
	int rw;
	int col;

	for (rw = 0; rw < 8; rw++)
	{
		for (col = 0; col < 8; col++)
		_putchar(a[rw][col]);
		_putchar('\n');
	}
}
