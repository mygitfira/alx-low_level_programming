#include "main.h"

/**
 *print_triangle - check the code.
 *@size: number of blank
 * Return: void
 */

void print_triangle(int size)
{
int j, i;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
	for (j = size; j >= 1; j--)
	{
		if (j > i)
			_putchar(' ');
		else
			_putchar('#');
	}
	_putchar('\n');
}
}
else
_putchar('\n');
}
