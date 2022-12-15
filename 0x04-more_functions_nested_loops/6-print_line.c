#include "main.h"

/**
 * print_line - check the code.
 *@n: number of blank
 * Return: void
 */

void print_line(int n)
{
int j;
if (n > 0)
{
for (j = 1; j <= n; j++)
{
	_putchar('_');
}
	_putchar('\n');
}
else
_putchar('\n');
}
