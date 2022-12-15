#include "main.h"

/**
 * print_diagonal - check the code.
 *@n: number of blank
 * Return: void
 */

void print_diagonal(int n)
{
int j, i;
if (n > 0)
{
for (j = 1; j <= n; j++)
{
	i = 1;
	while (i < j)
	{
	_putchar(' ');
	i++;
	}
	_putchar('\\');
	_putchar('\n');
}
}
else
_putchar('\n');
}
