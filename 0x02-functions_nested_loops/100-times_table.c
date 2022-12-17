#include "main.h"

/**
 *print_times_table - Entry point
 *@n: times table
 *Return: Always 0 (Success)
 */

void print_times_table(int n)
{
int i, j, k;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
	{
		k = j * i;
		if (k <= 9)
		{
		_putchar((k % 10) + '0');
		if (j != n)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		if (i * (j + 1) < 10)
		_putchar(' ');
		}
		}
		else if (k <= 99 && k >= 10)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 100)
				{
					_putchar(' ');
				}
			}
		}
		else
		{
int r;
r = k % 100;
_putchar((k / 100) + '0');
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
}
