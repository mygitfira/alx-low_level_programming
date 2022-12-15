#include "main.h"

/**
 * print_square - check the code.
 *@size: number of blank
 * Return: void
 */

void print_square(int size)
{
int j, i;
if (size > 0)
{
for (j = 1; j <= size; j++)
{
	i = 1;
	while (i <= size)
	{
	_putchar('#');
	i++;
	}
	_putchar('\n');
}
}
else
_putchar('\n');
}
