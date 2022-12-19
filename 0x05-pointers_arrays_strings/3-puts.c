#include "main.h"
/**
 *_puts - check the code
 *@str: parametre a
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
