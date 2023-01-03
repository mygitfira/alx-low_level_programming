#include "main.h"

/**
 * print_chessboard - prints buffer in hexa
 *
 * Return: 0.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (j = 0; j < 8; j++)
{
	for (i = 0; i < 8; i++)
	{
		_putchar(a[j][i]);
	}
	_putchar('\n');
}
}
