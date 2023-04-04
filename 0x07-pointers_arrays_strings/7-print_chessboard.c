#include "main.h"
/**
  * print_chessboard - Print the chessboard
  * @a: array of pieces
  *
  * Return: Nothing.
  */
void print_chessboard(char (*a)[8])
{
	int e, w;

	for (e = 0; e < 8; e++)
	{
		for (w = 0; w < 8; w++)
		{
			_putchar(a[e][w]);
		}

		_putchar('\n');
	}
}

