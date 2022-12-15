#include "main.h"

/**
 *times_table - Entry point
 *
 *Return: Always 0 (Success)
 */

void times_table(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		k = j * i;
		if (k <= 9)
		{
		_putchar(k + '0');
		_putchar(' ');
		}
		else
		{
		_putchar(k + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
}
