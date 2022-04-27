#include "main.h"
/**
 * print_chessboard - prints chessboard as the name suggests
 * @a: a 2 dimensional array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[b][c]);
	_putchar('\n');
	}
}
