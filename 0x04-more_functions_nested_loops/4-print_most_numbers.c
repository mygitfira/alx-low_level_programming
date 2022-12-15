#include "main.h"

/**
 *print_most_numbers - check the code.
 *
 *Return: void
 */

void print_most_numbers(void)
{
char i = 48;
	while (i < 58)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
