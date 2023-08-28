#include "main.h"

/**
 *print_chessboard- will print chessbord from [8][8]
 *@a: row
 * Return: Nothing
 *
*/

void print_chessboard(char (*a)[8])
{
	int p;
	int q;

	for (p = 0; p < 8; p++)
	{
		for (q = 0; q < 8; q++)
			_putchar(a[p][q]);
		_putchar('\n');
	}
}
