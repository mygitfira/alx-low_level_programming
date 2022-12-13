#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char i = 'a';
int j = 1;
	while (j <= 10)
	{
	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	j++;
	}
}
