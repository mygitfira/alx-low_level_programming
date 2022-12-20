#include "main.h"
#include <stdio.h>
/**
 * puts_half - check the code
 * @str: parametre s
 *
 */

void puts_half(char *str)
{
int i = 0;
while (*str != '\0')
{
str++;
i++;
}
str -= (i / 2);
while (*str != '\0')
{
	_putchar(*str);
	str++;
}
_putchar('\n');
}
