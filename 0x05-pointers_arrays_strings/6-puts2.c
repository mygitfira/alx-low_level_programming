#include "main.h"
#include <stdio.h>
/**
 * puts2 - check the code
 * @str: parametre s
 *
 */

void puts2(char *str)
{
int i = 0, j;
while (str[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
if (j % 2 == 0)
	_putchar(str[j]);
}
_putchar('\n');
}
