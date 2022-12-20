#include "main.h"
#include <stdio.h>
/**
 * puts_half - check the code
 * @str: parametre s
 *
 */

void puts_half(char *str)
{
int i = 0, j;
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0)
{
for (j = (i - 1) / 2; j < i; j++)
{
	_putchar(str[j]);
}
}
else
{
for (j = i / 2; j < i; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
