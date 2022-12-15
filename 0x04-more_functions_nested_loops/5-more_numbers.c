#include "main.h"

/**
 *more_numbers - check the code.
 *
 *Return: void
 */

void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
	i = 0;
	while (i < 15)
	{
		if (i >= 10)
			_putchar('1');
		_putchar((i % 10) + '0');
		i++;
	}
	_putchar('\n');
}
}
