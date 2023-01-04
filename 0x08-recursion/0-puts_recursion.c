#include "main.h"
/**
 * _puts_recursion - function recurtion
 * @s: string
 *
 */

void _puts_recursion(char *s)
{
int i = 0;
_putchar(s[i]);
if (s[i] != '\0')
{
	i++;
	_puts_recursion(s + i);
	if (s[i] == '\0')
		_putchar('\n');
}
}
